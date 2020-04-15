/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 10:34:11 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/17 20:51:47 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	main(int argc, char **argv)
{
	char		**solution_grid;
	t_sudoku	sudoku;

	solution_grid = 0;
	if (ft_input_is_valid(argc, argv) == 0)
		ft_display_error();
	else
	{
		if ((ft_user_entry_is_valid(argv)) == 1)
		{
			sudoku.grid = argv;
			sudoku.solution = solution_grid;
			sudoku.count_solutions = 0;
			ft_sudoku(&sudoku);
		}
		else
			ft_display_error();
	}
	return (0);
}
