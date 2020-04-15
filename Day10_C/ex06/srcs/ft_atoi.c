/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 10:38:45 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/20 21:00:17 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	blank(char *str, int *is_negative)
{
	int i;

	i = 0;
	while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\r'
		|| str[i] == '\f' || str[i] == '\v') && str[i] != '\0')
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			*is_negative = 1;
		}
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int nb;
	int charct;
	int is_negative;

	nb = 0;
	charct = 0;
	is_negative = 0;
	charct = blank(str, &is_negative);
	while (str[charct] >= '0' && str[charct] <= '9')
	{
		nb = nb * 10 + (str[charct] - 48);
		charct++;
	}
	if (is_negative == 1)
		nb = -nb;
	return (nb);
}
