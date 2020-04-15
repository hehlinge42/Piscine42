/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 13:38:36 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/13 09:40:56 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		abs(int nb)
{
	if (nb < 0)
	{
		return (-nb);
	}
	else
	{
		return (nb);
	}
}

void	print_solution(char *tab)
{
	int i;

	i = 0;
	while (i < 8)
	{
		ft_putchar(tab[i]);
		i++;
	}
	ft_putchar('\n');
}

int		is_valid(char *tab, int position, int to_add)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < position
		&& tab[i] != to_add
		&& abs(to_add - tab[i]) != position - i)
	{
		i++;
	}
	if (i == position)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	solve_eight_queens(char *tab, int position, int to_add)
{
	int rappel;

	if (position == -1)
		return ;
	else if (tab[7] != '0')
	{
		print_solution(tab);
		rappel = tab[6];
		tab[6] = '0';
		tab[7] = '0';
		solve_eight_queens(tab, position - 2, rappel + 1);
	}
	else
	{
		while (to_add <= '8' && is_valid(tab, position, to_add) == 0)
			to_add++;
		if (to_add <= '8')
		{
			tab[position] = to_add;
			solve_eight_queens(tab, position + 1, '1');
		}
		else
			solve_eight_queens(tab, position - 1, tab[position - 1] + 1);
	}
}

void	ft_eight_queens_puzzle_2(void)
{
	char	tab[8];
	int		i;

	i = 0;
	while (i < 8)
	{
		tab[i] = '0';
		i++;
	}
	solve_eight_queens(tab, 0, '1');
}
