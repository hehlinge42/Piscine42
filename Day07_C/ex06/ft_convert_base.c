/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 10:38:45 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/19 11:51:24 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_count(int *base_10, int *is_negative, int *nb_cpy, char *base_to);

int		base_vld(char *base)
{
	int i;
	int j;

	i = 0;
	j = 1;
	if (base[0] == '\0' || base[1] == '\0')
	{
		return (0);
	}
	else
	{
		while (base[j] != '\0')
		{
			i = 0;
			while (i < j)
			{
				if (base[i] == base[j] || base[i] < 32
					|| base[i] == '-' || base[i] == '+')
					return (-1);
				i++;
			}
			j++;
		}
	}
	return (j);
}

int		str_vld(char *str, char *base, int *is_negative, int *ch)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (str[0] == '\0')
		return (0);
	if (str[0] == '-')
		*is_negative = 1;
	if (str[0] == '+' || str[0] == '-')
	{
		*ch = *ch + 1;
		i++;
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0' && str[i] != base[j])
			j++;
		if (base[j] == '\0')
			return (0);
		i++;
	}
	return (1);
}

int		ft_atoi_base(char *str, char *base, int prm)
{
	int nb;
	int ch;
	int neg;

	nb = 0;
	ch = -1;
	neg = 0;
	if (prm == 0 && base_vld(base) != -1 && str_vld(str, base, &neg, &ch) == 1)
	{
		while (ft_atoi_base(str + (++ch), base, 1) - 1 != -1 && str[ch] != '\0')
			nb = nb * base_vld(base) + ft_atoi_base(str + (ch), base, 1) - 1;
		if (neg == 1)
			nb = -nb;
		return (nb);
	}
	else if (prm == 1)
	{
		while (base[nb] != '\0')
		{
			if (str[0] == base[nb])
				return (nb + 1);
			nb++;
		}
	}
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		base_10;
	int		count;
	char	*tab;
	int		is_negative;
	int		nb_cpy;

	tab = 0;
	is_negative = 0;
	if (base_vld(base_from) == -1 || base_vld(base_to) == -1
		|| str_vld(nbr, base_from, &is_negative, &count) == 0)
		return (NULL);
	base_10 = ft_atoi_base(nbr, base_from, 0);
	count = 1;
	if (base_vld(base_to) != -1)
		count = ft_count(&base_10, &is_negative, &nb_cpy, base_to);
	tab = (char*)malloc(sizeof(char) * (count + 1));
	tab[count] = '\0';
	while (--count >= 0 && base_10 >= 0)
	{
		tab[count] = base_to[(base_10 % base_vld(base_to))];
		base_10 /= base_vld(base_to);
	}
	if (is_negative == 1)
		tab[0] = '-';
	return (tab);
}

int		ft_count(int *base_10, int *is_negative, int *nb_cpy, char *base_to)
{
	int count;

	count = 1;
	if (*base_10 < 0)
	{
		*base_10 = -(*base_10);
		count++;
		*is_negative = 1;
	}
	*nb_cpy = *base_10;
	while (*nb_cpy / base_vld(base_to) > 0)
	{
		*nb_cpy /= base_vld(base_to);
		count++;
	}
	return (count);
}
