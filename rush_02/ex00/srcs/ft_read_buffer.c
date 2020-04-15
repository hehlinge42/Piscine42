/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_buffer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 15:32:18 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/24 17:26:49 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush2.h"
#include <stdlib.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_realloc(char *old, int size)
{
	char *buf;

	if (!(buf = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	buf[size] = '\0';
	buf = ft_strcpy(buf, old);
	free(old);
	return (buf);
}

char	*ft_read_buffer(int *count_char)
{
	int		ret;
	char	buf;
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * (BUF_SIZE + 1))))
		return (0);
	while ((ret = read(0, &buf, 1)) > 0)
	{
		str[(*count_char)] = buf;
		*count_char = *count_char + 1;
		if ((*count_char) % BUF_SIZE == 0)
			if (!(str = ft_realloc(str, (*count_char) + BUF_SIZE)))
				return (0);
	}
	str[(*count_char) + 1] = '\0';
	return (str);
}
