/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 13:54:26 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/21 09:56:10 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*mid;

	i = 0;
	j = 1;
	if (tab[0] != 0 && tab[0] != 0)
	{
		while (tab[j] != 0)
		{
			i = 0;
			while (i < j)
			{
				if (cmp(tab[i], tab[j]) > 0)
				{
					mid = tab[i];
					tab[i] = tab[j];
					tab[j] = mid;
				}
				i++;
			}
			j++;
		}
	}
}
