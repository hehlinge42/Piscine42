/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 19:06:00 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/20 21:01:12 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/doop.h"

int	main(int argc, char **argv)
{
	int nb1;
	int nb2;
	int	res;
	int error;

	nb1 = 0;
	nb2 = 0;
	res = 0;
	error = 0;
	if (check_validity(argc, argv) == 0)
		return (0);
	else
	{
		nb1 = ft_atoi(argv[1]);
		nb2 = ft_atoi(argv[3]);
		res = doop(nb1, nb2, argv[2][0], &error);
		if (error != 1)
		{
			ft_putnbr(res);
			ft_putchar('\n');
		}
	}
	return (0);
}
