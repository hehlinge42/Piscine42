/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_is_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 10:36:24 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/17 19:38:18 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	ft_line_is_valid(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '.' || (str[i] >= '1' && str[i] <= '9'))
			i++;
		else
			return (0);
	}
	if (i == 9)
		return (1);
	else
		return (0);
}

int	ft_input_is_valid(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 10)
	{
		while (i <= 9)
		{
			if (ft_line_is_valid(argv[i]) == 0)
				return (0);
			i++;
		}
	}
	else
		return (0);
	return (1);
}

int	ft_user_entry_is_valid(char **argv)
{
	int lin;
	int col;

	lin = 1;
	while (lin <= 9)
	{
		col = 0;
		while (col <= 8)
		{
			if (argv[lin][col] != '.')
			{
				if (ft_spot_is_valid(argv, lin, col, argv[lin][col]) == 0)
				{
					return (0);
				}
			}
			col++;
		}
		lin++;
	}
	return (1);
}
