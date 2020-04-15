/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 21:14:01 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/12 16:33:36 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
