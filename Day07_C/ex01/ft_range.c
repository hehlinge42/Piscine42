/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 17:37:34 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/19 11:56:31 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		size;
	int		*tab;
	int		i;

	i = 0;
	tab = NULL;
	if (min >= max)
		return (tab);
	size = max - min;
	tab = (int*)malloc(sizeof(*tab) * size);
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
