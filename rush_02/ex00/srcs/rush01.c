/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machoffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 11:31:51 by machoffa          #+#    #+#             */
/*   Updated: 2019/02/24 12:57:34 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	print_last_lin1(char *str, int i_col, int col)
{
	while (i_col % (col + 1) != col)
	{
		if (i_col % (col + 1) == 0)
			str[i_col] = '\\';
		else if (i_col % (col + 1) == col - 1)
			str[i_col] = '/';
		else
			str[i_col] = '*';
		i_col++;
	}
	str[i_col] = '\n';
}

void	print_first_lin1(char *str, int i_col, int col)
{
	while (i_col % (col + 1) != col)
	{
		if (i_col % (col + 1) == 0)
			str[i_col] = '/';
		else if (i_col % (col + 1) == col - 1)
			str[i_col] = '\\';
		else
			str[i_col] = '*';
		i_col++;
	}
	str[i_col] = '\n';
}

void	print_mid_lin1(char *str, int i_col, int col)
{
	while (i_col % (col + 1) != col)
	{
		if (i_col % (col + 1) == 0 || i_col % (col + 1) == col - 1)
			str[i_col] = '*';
		else
			str[i_col] = ' ';
		i_col++;
	}
	str[i_col] = '\n';
}

char	*rush01(int col, int lin)
{
	int		i_lin;
	int		i_col;
	char	*str;

	str = 0;
	i_lin = 0;
	i_col = 0;
	if (!(str = (char *)malloc(sizeof(char) * ((col + 1) * lin + 1))))
		return (0);
	while (i_lin < lin)
	{
		if (i_lin == 0)
			print_first_lin1(str, i_col, col);
		else if (i_lin == lin - 1)
			print_last_lin1(str, i_col, col);
		else
			print_mid_lin1(str, i_col, col);
		i_lin++;
		i_col += col + 1;
	}
	str[i_col] = '\0';
	return (str);
}
