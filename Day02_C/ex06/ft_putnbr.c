/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 14:07:40 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/07 21:10:05 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_putchar(char c);

unsigned int	negative(int nb)
{
	unsigned int u_nb;

	if (nb < 0)
	{
		u_nb = -nb;
		ft_putchar('-');
	}
	else
		u_nb = nb;
	return (u_nb);
}

int				magnitude(unsigned int nb)
{
	int magnitude;

	magnitude = 1;
	while ((nb / magnitude) > 10)
	{
		magnitude *= 10;
	}
	return (magnitude);
}

void			ft_putnbr(int nb)
{
	int				magn;
	unsigned int	u_nb;

	u_nb = negative(nb);
	magn = magnitude(u_nb);
	if (u_nb == 0)
		ft_putchar(48);
	else
	{
		while (u_nb != 0)
		{
			ft_putchar((u_nb / magn) + 48);
			u_nb = u_nb % magn;
			magn /= 10;
		}
	}
}
