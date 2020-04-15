/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 15:43:46 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/18 17:44:23 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	dest[i] = '\n';
	i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (src[j] == '\0')
	{
		dest[i] = '\0';
	}
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		full_length;
	char	*str;

	i = 1;
	full_length = 0;
	while (i < argc)
	{
		full_length += (ft_strlen(argv[i]) + 1);
		i++;
	}
	str = (char*)malloc(sizeof(*str) * full_length);
	i = 1;
	while (i < argc)
	{
		if (i == 1)
			ft_strcpy(str, argv[i]);
		else
			ft_strcat(str, argv[i]);
		i++;
	}
	str[full_length - 1] = '\0';
	return (str);
}
