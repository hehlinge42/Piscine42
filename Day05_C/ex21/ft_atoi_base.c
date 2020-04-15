/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 10:38:45 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/14 21:09:24 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int		str_is_valid(char *str, char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	if (str[0] == '+' || str[0] == '-')
		i++;
	while (str[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0' && str[i] != base[j]
			&& str[i] != '+' && str[i] != '-')
		{
			j++;
		}
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
	charct = 0;
	is_negative = 0;
	if (base_is_valid(base) != -1 && str_is_valid(str, base) == 1)
	{
		if (str[charct] == '+' || str[charct] == '-')
			if (str[charct] == '-')
				is_negative = 1;
		if (str[charct] == '+' || str[charct] == '-')
			charct++;
		while (spot_in_base(str[charct], base) != -1 && str[charct] != '\0'
			&& str[charct] != '+' && str[charct] != '-')
		{
			nb = nb * base_is_valid(base) + spot_in_base(str[charct], base);
			charct++;
		}
		if (is_negative == 1)
			nb = -nb;
		return (nb);
	}
	return (0);
}
