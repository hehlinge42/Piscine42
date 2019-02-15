/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 17:38:01 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/14 15:47:08 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_ultimate_range(int **range, int min, int max);

int main()
{
	int **tab;
	int min = 10;
	int max = 32;
	int size;
	int i;
	int res;
	int *tab2 = 0;

	i = 0;
	tab = &tab2;
	size = max - min;
	res = ft_ultimate_range(tab, min, max);
	printf("res = %d\n", res);
	while (i < size)
	{
		printf("%d\n", tab[0][i]);
		i++;
	}
}
