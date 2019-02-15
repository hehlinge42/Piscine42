/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 17:38:01 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/13 18:43:43 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int *ft_range(int min, int max);

int main()
{
	int *tab;
	int min = -10;
	int max = 22;
	int size;
	int i;

	i = 0;
	size = max - min;
	tab = ft_range(min, max);
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
