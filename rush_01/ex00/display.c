/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 19:08:05 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/17 19:41:23 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display_error(void)
{
	write(1, "Error\n", 6);
}

void	ft_display_solutions(char **grid)
{
	int lin;
	int col;

	lin = 1;
	while (lin <= 9)
	{
		col = 0;
		while (col <= 8)
		{
			ft_putchar(grid[lin][col]);
			if (col == 8)
				ft_putchar('\n');
			else
				ft_putchar(' ');
			col++;
		}
		lin++;
	}
}
