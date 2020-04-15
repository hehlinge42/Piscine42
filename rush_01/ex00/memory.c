/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 15:41:56 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/17 19:42:35 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	ft_duplicate(t_sudoku *sudoku)
{
	int		i;
	int		lin;
	int		col;

	i = 0;
	lin = 1;
	sudoku->solution = (char **)malloc(sizeof(char *) * 10);
	while (i < 10)
	{
		sudoku->solution[i] = (char *)malloc(sizeof(char) * 9);
		i++;
	}
	while (lin < 10)
	{
		col = 0;
		while (sudoku->grid[lin][col] != '\0')
		{
			sudoku->solution[lin][col] = sudoku->grid[lin][col];
			col++;
		}
		lin++;
	}
}
