/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 15:32:39 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/24 21:59:52 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_eval_expr.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int u_nb;

	if (nb < 0)
	{
		ft_putchar('-');
		u_nb = -nb;
	}
	else
	{
		u_nb = nb;
	}
	if (u_nb < 10)
	{
		ft_putchar(u_nb + 48);
	}
	else if (u_nb >= 10)
	{
		ft_putnbr(u_nb / 10);
		ft_putnbr(u_nb % 10);
	}
}

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int	res;

	i = 0;
	neg = 0;
	res = 0;
	while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f') && str[i])
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (neg == 1)
		res = -res;
	return (res);
}
