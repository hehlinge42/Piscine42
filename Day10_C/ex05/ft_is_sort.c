/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 16:51:33 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/21 09:58:01 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int type_sort;

	i = 1;
	if (length > 1)
	{
		while ((*f)(tab[i - 1], tab[i]) == 0 && i < length)
			i++;
		type_sort = (*f)(tab[i - 1], tab[i]);
		while (i < length)
		{
			if ((((*f)(tab[i - 1], tab[i]) < 0) && type_sort > 0)
				|| (((*f)(tab[i - 1], tab[i]) > 0) && type_sort < 0))
				return (0);
			i++;
		}
	}
	return (1);
}
