/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 17:37:34 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/19 11:57:27 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		size;
	int		i;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	else
	{
		size = max - min;
		if (!(range[0] = (int*)malloc(sizeof(int) * size)))
			return (0);
		while (i < size)
		{
			range[0][i] = min + i;
			i++;
		}
	}
	return (size);
}
