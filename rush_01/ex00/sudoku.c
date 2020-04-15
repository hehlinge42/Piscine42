/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 15:41:56 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/17 20:51:50 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	ft_sudoku(t_sudoku *sudoku)
{
	int lin;
	int col;

	lin = 1;
	col = 0;
	if (ft_solve_sudoku(sudoku, lin, col, '1') == 0
		&& sudoku->count_solutions == 1)
		ft_display_solutions(sudoku->solution);
	else
		ft_display_error();
	free(sudoku->solution);
}

int		ft_solve_sudoku(t_sudoku *sudoku, int lin, int col, char nb)
{
	if (sudoku->count_solutions > 1)
		return (0);
	ft_find_next_spot(sudoku->grid, &lin, &col);
	if (lin == 10)
	{
		sudoku->count_solutions++;
		if (sudoku->count_solutions > 1)
			return (0);
		else if (sudoku->count_solutions == 1)
			ft_duplicate(sudoku);
	}
	else
	{
		nb = '0';
		while (++nb <= '9')
			if (ft_spot_is_valid(sudoku->grid, lin, col, nb) == 1)
			{
				sudoku->grid[lin][col] = nb;
				if (ft_solve_sudoku(sudoku, lin, col, '1') == 1)
					return (1);
				else
					sudoku->grid[lin][col] = '.';
			}
	}
	return (0);
}

void	ft_find_next_spot(char **grid, int *lin, int *col)
{
	while (*lin <= 9 && grid[*lin][*col] != '.')
	{
		if (*col <= 8)
			*col += 1;
		else
		{
			*col = 0;
			*lin += 1;
		}
	}
}
