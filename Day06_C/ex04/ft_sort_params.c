/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 20:09:47 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/13 12:36:30 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

void	ft_sort_args(char **tab, int size)
{
	int		i;
	int		j;
	char	*mid;

	i = 1;
	j = 2;
	while (j < size)
	{
		i = 1;
		while (i < j)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				mid = tab[i];
				tab[i] = tab[j];
				tab[j] = mid;
			}
			i++;
		}
		j++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			i++;
		}
		ft_sort_args(argv, i);
		while (j < i)
		{
			ft_putstr(argv[j]);
			ft_putchar('\n');
			j++;
		}
	}
}
