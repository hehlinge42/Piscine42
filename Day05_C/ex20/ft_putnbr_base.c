/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 21:14:01 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/12 16:57:50 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_str_is_printable(char *str);
int		duplicate(char *tan);

int		base_is_valid(char *base)
{
	int i;

	i = 0;
	if (ft_str_is_printable(base) == 0 || duplicate(base) == 0)
		return (0);
	else
	{
		while (base[i] != '\0')
			i++;
		if (i > 1)
			return (1);
		else
			return (0);
	}
}

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && str[i] > 31 && str[i] != '-' && str[i] != '+')
	{
		i++;
	}
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

int		duplicate(char *tab)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (tab[j] != '\0')
	{
		i = 0;
		while (i < j)
		{
			if (tab[i] == tab[j])
			{
				return (0);
			}
			i++;
		}
		j++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_size;
	unsigned int	u_nb;

	base_size = 0;
	if (base_is_valid(base) == 1)
	{
		while (base[base_size] != '\0')
			base_size++;
		if (nbr < 0)
		{
			ft_putchar('-');
			u_nb = -nbr;
		}
		else
			u_nb = nbr;
		if (u_nb < base_size)
		{
			ft_putchar(base[u_nb]);
		}
		else if (u_nb >= base_size)
		{
			ft_putnbr_base(u_nb / base_size, base);
			ft_putnbr_base(u_nb % base_size, base);
		}
	}
}
