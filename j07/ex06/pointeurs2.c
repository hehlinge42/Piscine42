/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 10:38:45 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/15 15:02:04 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		base_is_valid(char *base)
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

int		str_is_valid(char *str, char *base, int *is_negative, int *charct)
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
		*charct = *charct + 1;
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

int		spot_in_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int nb;
	int charct;
	int is_negative;

	nb = 0;
	charct = -1;
	is_negative = 0;
	if (base_is_valid(base) != -1 && str_is_valid(str, base, &is_negative, &charct) == 1)
	{
		while (spot_in_base(str[++charct], base) != -1 && str[charct] != '\0')
			nb = nb * base_is_valid(base) + spot_in_base(str[charct], base);
		if (is_negative == 1)
			nb = -nb;
		return (nb);
	}
	return (0);
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int base_10;
	int count;
	char *tab;
	int is_negative;
	int nb_cpy;

	is_negative = 0;
	base_10 = ft_atoi_base(nbr, base_from);
	count = 1;
	if (base_is_valid(base_to) != -1)
	{
		if (base_10 < 0)
		{
			base_10 = -base_10;
			count++;
			is_negative = 1;
		}
		nb_cpy = base_10;
		while (nb_cpy / base_is_valid(base_to) > 0)
		{
			nb_cpy /= base_is_valid(base_to);
			count++;
		}
	}
	tab = (char*)malloc(sizeof(char) * (count + 1));
	tab[count] = '\0';
	if (is_negative == 1)
		tab[0] = '-';
	while (--count >= 0 && base_10 > 0)
	{
		tab[count] = base_to[(base_10 % base_is_valid(base_to))];
		base_10 /= base_is_valid(base_to);
	}
	return (tab);
}
