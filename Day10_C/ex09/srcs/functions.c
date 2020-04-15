/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 20:50:40 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/20 22:13:10 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_advanced_doop.h"

int	ft_add(int nb1, int nb2)
{
	ft_putnbr(nb1 + nb2);
	return (nb1 + nb2);
}

int	ft_sub(int nb1, int nb2)
{
	ft_putnbr(nb1 - nb2);
	return (nb1 - nb2);
}

int	ft_mul(int nb1, int nb2)
{
	ft_putnbr(nb1 * nb2);
	return (nb1 * nb2);
}

int	ft_div(int nb1, int nb2)
{
	if (nb2 == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	ft_putnbr(nb1 / nb2);
	return (nb1 / nb2);
}

int	ft_mod(int nb1, int nb2)
{
	if (nb2 == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	ft_putnbr(nb1 % nb2);
	return (nb1 % nb2);
}
