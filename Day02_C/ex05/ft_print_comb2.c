/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 14:07:40 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/07 21:04:41 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_print_numbers(int nb1, int nb2, int nb3, int nb4)
{
	int	with_comma;

	with_comma = 1;
	if (nb1 == 9 && nb2 == 8 && nb3 == 9 && nb4 == 9)
	{
		with_comma = 0;
	}
	ft_putchar(nb1 + 48);
	ft_putchar(nb2 + 48);
	ft_putchar(' ');
	ft_putchar(nb3 + 48);
	ft_putchar(nb4 + 48);
	if (with_comma != 0)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	return (0);
}

void	ft_print_comb2(void)
{
	int	nb1;
	int	nb2;
	int	nb3;
	int	nb4;

	nb1 = -1;
	nb2 = -1;
	nb3 = -1;
	nb4 = -1;
	while (++nb1 <= 9)
	{
		while (++nb2 <= 9)
		{
			while (++nb3 <= 9)
			{
				while (++nb4 <= 9)
					if (nb1 * 10 + nb3 < nb2 * 10 + nb4)
						ft_print_numbers(nb1, nb2, nb3, nb4);
				nb4 = 0;
			}
			nb3 = 0;
		}
		nb2 = 0;
	}
}
