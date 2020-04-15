/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machoffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 11:29:29 by machoffa          #+#    #+#             */
/*   Updated: 2019/02/24 12:53:25 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush2.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
