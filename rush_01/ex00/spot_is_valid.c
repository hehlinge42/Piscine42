/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 11:23:52 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/17 19:49:06 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	ft_spot_is_valid(char **grid, int lin, int col, char nb)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (j <= 8)
	{
		if (grid[lin][j] == nb && j != col)
			return (0);
		j++;
	}
	while (i <= 9)
	{
		if (grid[i][col] == nb && i != lin)
			return (0);
		i++;
	}
	if (ft_square_is_valid(grid, lin, col, nb) == 1)
		return (1);
	return (0);
}

int	ft_square_is_valid(char **grid, int lin, int col, char nb)
{
	int i;
	int j;

	i = ((lin - 1) / 3) * 3 + 1;
	j = (col / 3) * 3;
	while (i <= (((lin - 1) / 3) * 3 + 3))
	{
		j = (col / 3) * 3;
		while (j < ((col / 3) * 3 + 2))
		{
			if (grid[i][j] == nb && i != lin && j != col)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
