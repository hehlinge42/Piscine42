/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lin_col.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 15:17:14 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/24 14:04:09 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush2.h"
#include <stdlib.h>

void	ft_lin_col(char *str, int *lin, int *col)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '\n' && *lin == 0)
			(*col)++;
		else if (str[i] == '\n')
			(*lin)++;
		i++;
	}
}

int		ft_init_struct(t_struct *tab_rush)
{
	tab_rush[0].func = rush00;
	tab_rush[0].charset = "ooo";
	tab_rush[1].func = rush01;
	tab_rush[1].charset = "/\\/";
	tab_rush[2].func = rush02;
	tab_rush[2].charset = "AAC";
	tab_rush[3].func = rush03;
	tab_rush[3].charset = "ACC";
	tab_rush[4].func = rush04;
	tab_rush[4].charset = "ACA";
	tab_rush[5].charset = "\0";
	return (1);
}

void	ft_test_rush(char *buf, int lin, int col)
{
	t_struct	tab_rush[6];
	int			i;
	char		*str;
	int			nb_sol;

	nb_sol = 0;
	i = -1;
	if (!(ft_init_struct(tab_rush)))
		return ;
	while (++i < 5)
	{
		if (lin == 1 || col == 1 || (buf[0] == tab_rush[i].charset[0]
			&& buf[col - 1] == tab_rush[i].charset[1]
			&& buf[lin * (col + 1) - 2] == tab_rush[i].charset[2]))
		{
			str = tab_rush[i].func(col, lin);
			if (ft_strcmp(str, buf) == 0)
			{
				ft_display_sol(nb_sol++, i, lin, col);
				free(str);
			}
		}
	}
	if (nb_sol == 0)
		ft_putstr("aucune");
}

void	ft_display_sol(int nb_sol, int rush, int lin, int col)
{
	if (nb_sol > 0)
		ft_putstr(" || ");
	ft_putstr("[colle-0");
	ft_putnbr(rush);
	ft_putstr("] [");
	ft_putnbr(col);
	ft_putstr("] [");
	ft_putnbr(lin);
	ft_putstr("]");
}
