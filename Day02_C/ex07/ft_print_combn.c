/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 08:58:57 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/07 21:11:54 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_combn(int n);

int		add_zeros(int *tab, int n, int last_i)
{
	int j;

	j = last_i + 1;
	while (j < n)
	{
		tab[j] = 0;
		j++;
	}
	last_i++;
	return (last_i);
}

void	init_tab(int *tab, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
}

void	print(int *tab, int n)
{
	int j;
	int to_print;

	to_print = 1;
	j = 0;
	while (j < n)
	{
		ft_putchar(tab[j] + '0');
		j++;
	}
	if (tab[0] == 10 - n)
		return ;
	if (to_print == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

int		is_valid(int *tab, int n)
{
	int is_valid;
	int i;

	i = 0;
	is_valid = 1;
	while (is_valid == 1 && i < n - 1)
	{
		if (tab[i] < tab[i + 1])
			is_valid = 1;
		else
			is_valid = 0;
		i++;
	}
	return (is_valid);
}

void	ft_print_combn(int n)
{
	int tab[n];
	int last_i;
	int j;
	int valid;

	last_i = n - 1;
	j = 0;
	valid = 1;
	init_tab(tab, n);
	while (last_i >= 0)
	{
		j = 0;
		if (tab[last_i] != 9)
		{
			tab[last_i] += 1;
			if (last_i < n - 1)
				last_i = add_zeros(tab, n, last_i);
			valid = is_valid(tab, n);
			if (valid == 1)
				print(tab, n);
		}
		else
			last_i--;
	}
}
