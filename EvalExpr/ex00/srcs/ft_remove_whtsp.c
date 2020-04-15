/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_whtsp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 18:38:05 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/24 21:58:12 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/ft_eval_expr.h"

char	*ft_remove_whtsp(char *str)
{
	int		i;
	int		j;
	int		count;
	char	*expr;

	i = -1;
	count = 0;
	while (str[++i])
	{
		if ((ft_char_in_str(str[i], "0123456789/*-+%()") == 1))
			count++;
	}
	if (!(expr = (char *)malloc(sizeof(char) * (count + 1))))
		return (0);
	expr[count] = '\0';
	i = -1;
	j = 0;
	while (str[++i])
		if ((ft_char_in_str(str[i], "0123456789/*-+%()") == 1))
		{
			expr[j] = str[i];
			j++;
		}
	return (expr);
}

int		ft_char_in_str(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}
