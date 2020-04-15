/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 22:29:35 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/14 21:05:12 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int src_len;
	unsigned int dest_len;
	unsigned int i;
	unsigned int j;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	i = dest_len;
	j = 0;
	if (dest_len > size)
		dest_len = size;
	if (dest_len == size)
		return (dest_len + src_len);
	else
	{
		while (src[j] != '\0' && i + 1 < size)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	return (src_len + dest_len);
}
