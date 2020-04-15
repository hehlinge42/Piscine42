/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 19:05:31 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/20 21:41:49 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/doop.h"

int		check_validity(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	else
	{
		if (ft_strlen(argv[2]) != 1
			|| (argv[2][0] != '+'
			&& argv[2][0] != '-'
			&& argv[2][0] != '*'
			&& argv[2][0] != '/'
			&& argv[2][0] != '%'))
		{
			ft_putchar('0');
			ft_putchar('\n');
		}
		else
			return (1);
	}
	return (0);
}

int		ft_error(int nb1, int *error)
{
	if (nb1 == 0)
	{
		*error = 1;
		return (1);
	}
	return (0);
}

void	init_tab(int (*func_list[5])(int, int))
{
	func_list[0] = sum;
	func_list[1] = soustraction;
	func_list[2] = multiplication;
	func_list[3] = division;
	func_list[4] = mod;
}

int		doop(int nb1, int nb2, char ope, int *error)
{
	int (*func_list[5])(int, int);

	init_tab(func_list);
	if (ope == '+')
		return (func_list[0](nb1, nb2));
	else if (ope == '-')
		return (func_list[1](nb1, nb2));
	else if (ope == '*')
		return (func_list[2](nb1, nb2));
	else if (ope == '/')
	{
		if (ft_error(nb2, error) == 1)
			ft_putstr("Stop : division by zero\n");
		else
			return (func_list[3](nb1, nb2));
	}
	else if (ope == '%')
	{
		if (ft_error(nb2, error) == 1)
			ft_putstr("Stop : modulo by zero\n");
		else
			return (func_list[4](nb1, nb2));
	}
	return (0);
}
