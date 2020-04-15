/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 14:07:40 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/06 19:26:32 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_print_numbers(int number_one, int number_two, int number_three)
{
	int	with_comma;

	with_comma = 1;
	if (number_one == 7 && number_two == 8 && number_three == 9)
	{
		with_comma = 0;
	}
	ft_putchar(number_one + 48);
	ft_putchar(number_two + 48);
	ft_putchar(number_three + 48);
	if (with_comma != 0)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	return (0);
}

void	ft_print_comb(void)
{
	int	number_one;
	int	number_two;
	int	number_three;

	number_one = 0;
	number_two = 0;
	number_three = 0;
	while (number_one <= 9)
	{
		while (number_two <= 9)
		{
			while (number_three <= 9)
			{
				if (number_two > number_one && number_three > number_two)
				{
					ft_print_numbers(number_one, number_two, number_three);
				}
				number_three++;
			}
			number_three = 0;
			number_two++;
		}
		number_two = 0;
		number_one++;
	}
}
