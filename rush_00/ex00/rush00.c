/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machoffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 11:31:51 by machoffa          #+#    #+#             */
/*   Updated: 2019/02/10 22:08:10 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	affichage_horizontal(int count_1, int horizontal)
{
	while (count_1 <= horizontal)
	{
		if (count_1 == 1 || count_1 == horizontal)
			ft_putchar('o');
		else
			ft_putchar('-');
		count_1++;
	}
}

void	affichage_vertical(int count_1, int horizontal)
{
	while (count_1 <= horizontal)
	{
		if (count_1 == 1 || count_1 == horizontal)
			ft_putchar('|');
		else
			ft_putchar(' ');
		count_1++;
	}
}

void	rush(int horizontal, int vertical)
{
	int count_1;
	int count_2;

	count_1 = 1;
	count_2 = 1;
	if (horizontal < 1 || vertical < 1)
		return ;
	while (count_2 <= vertical)
	{
		if (count_2 == 1 || count_2 == vertical)
		{
			affichage_horizontal(count_1, horizontal);
		}
		else
		{
			affichage_vertical(count_1, horizontal);
		}
		ft_putchar('\n');
		count_2++;
		count_1 = 1;
	}
}
