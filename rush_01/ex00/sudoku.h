/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 20:13:59 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/17 20:51:54 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SUDOKU_H
# define FT_SUDOKU_H
# include <unistd.h>
# include <stdlib.h>

typedef	struct	s_sudoku
{
	char	**grid;
	char	**solution;
	int		count_solutions;
}				t_sudoku;

void			ft_sudoku(t_sudoku *sudoku);
int				ft_solve_sudoku(t_sudoku *sudoku, int lin, int col, char nb);
int				ft_spot_is_valid(char **grid, int lin, int col, char nb);
void			ft_duplicate(t_sudoku *sudoku);
int				ft_line_is_valid(char *str);
int				ft_input_is_valid(int argc, char **argv);
int				ft_user_entry_is_valid(char **argv);
int				ft_square_is_valid(char **grid, int lin, int col, char nb);
void			ft_putchar(char c);
void			ft_display_error(void);
void			ft_display_solutions(char **grid);
void			ft_find_next_spot(char **grid, int *lin, int *col);

#endif
