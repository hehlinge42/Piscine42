/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 19:06:00 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/20 22:13:31 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_advanced_doop.h"
#include "../includes/ft_opp.h"

int	main(int argc, char **argv)
{
	int	res;
	int i;

	res = 0;
	if (argc != 4)
		return (0);
	i = check_validity(argv, ft_atoi(argv[1]), ft_atoi(argv[3]));
	if (i != -1)
	{
		res = g_opptab[i].func(ft_atoi(argv[1]), ft_atoi(argv[3]));
	}
	return (0);
}

int	check_validity(char **argv, int nb1, int nb2)
{
	int i;

	i = 0;
	while (i < 5)
	{
		if (ft_strcmp(argv[2], g_opptab[i].oper) == 0)
			return (i);
		i++;
	}
	ft_usage(nb1, nb2);
	return (-1);
}
