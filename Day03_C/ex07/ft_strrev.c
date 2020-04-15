/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 10:38:45 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/08 12:34:48 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char *a, char *b)
{
	int mid;

	mid = *a;
	*a = *b;
	*b = mid;
}

char	*ft_strrev(char *str)
{
	int nbchar;
	int i;

	nbchar = 0;
	i = 0;
	while (str[nbchar] != '\0')
	{
		nbchar++;
	}
	while (i <= (nbchar - 1) / 2)
	{
		ft_swap(str + i, str + nbchar - 1 - i);
		i++;
	}
	return (str);
}
