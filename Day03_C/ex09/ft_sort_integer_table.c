/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 10:38:45 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/08 12:40:39 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int mid;

	mid = *a;
	*a = *b;
	*b = mid;
}

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (j < size)
	{
		i = 0;
		while (i < j)
		{
			if (tab[i] > tab[j])
			{
				ft_swap(tab + i, tab + j);
			}
			i++;
		}
		j++;
	}
}
