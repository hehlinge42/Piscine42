/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 16:07:02 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/10 12:31:30 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		lines(int size);
int		col(int size);
int		size_increase(int size);

void	print_char(int l, int size, int i_col, int ncol)
{
	int i_size;
	int l_int;
	int nb_char;

	i_size = 1;
	while (l > lines(i_size) && i_size <= size)
		i_size++;
	l_int = i_size + 2 - (lines(i_size) - l);
	nb_char = col(i_size) - 2 * (i_size + 2 - l_int);
	if (i_col == (ncol - nb_char) / 2 + 1)
		ft_putchar('/');
	else if (i_col == (ncol - nb_char) / 2 + nb_char)
		ft_putchar('\\');
	else if (size > 4 && i_size == size && (l_int == lines(size) - lines(size
		- 1) - (size - (size - 1) % 2) / 2) && (i_col == (ncol + size) / 2 - 1))
		ft_putchar('$');
	else if (i_size == size
		&& l_int > lines(size) - lines(size - 1) - (size - (size + 1) % 2)
		&& (i_col >= (ncol - (size - ((size + 1) % 2))) / 2 + 1)
		&& (i_col < (ncol + (size)) / 2 + 1))
		ft_putchar('|');
	else if (i_col >= (ncol - nb_char) / 2 + 1 && i_col < (ncol + nb_char) / 2)
		ft_putchar('*');
	else if (i_col < (ncol - nb_char) / 2 + 1)
		ft_putchar(' ');
}

int		size_increase(int size)
{
	if (size == 1)
	{
		return (0);
	}
	else
	{
		return (2 + (size / 2));
	}
}

int		lines(int size)
{
	if (size == 0)
	{
		return (0);
	}
	else
		return (lines(size - 1) + size + 2);
}

int		col(int size)
{
	if (size == 0)
	{
		return (0);
	}
	else if (size == 1)
		return (7);
	else
	{
		return (col(size - 1) + 2 * size_increase(size) + 2 * (size + 1));
	}
}

void	sastantua(int size)
{
	int ncol;
	int nb_lin;
	int l;
	int i_col;

	if (size < 0)
		return ;
	ncol = col(size);
	nb_lin = lines(size);
	l = 1;
	while (l <= nb_lin)
	{
		i_col = 1;
		while (i_col <= ncol)
		{
			print_char(l, size, i_col, ncol);
			i_col++;
		}
		ft_putchar('\n');
		l++;
	}
}
