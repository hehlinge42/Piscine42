/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 17:47:22 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/14 21:16:46 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src, int beg, int end)
{
	unsigned int i;

	i = 0;
	while (beg < end)
	{
		dest[i] = src[beg];
		i++;
		beg++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*put_words_in_tab(char *str, int word_number)
{
	int		i;
	int		count;
	char	*tab;
	int		end;

	i = 0;
	count = 0;
	while (str[i] && count < word_number)
	{
		while ((str[i] == ' ' || str[i] == '\t'
			|| str[i] == '\n') && str[i] != '\0')
			i++;
		if (str[i])
			count++;
		while (str[i] != ' ' && str[i] != '\t'
			&& str[i] != '\n' && str[i] != '\0')
			i++;
	}
	end = i;
	while (str[i - 1] != ' ' && str[i - 1] != '\t'
		&& str[i - 1] != '\n' && i - 1 >= 0)
		i--;
	tab = (char*)malloc(sizeof(char) * (end - i));
	ft_strcpy(tab, str, i, end);
	return (tab);
}

int		ft_count_words(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while ((str[i] == ' ' || str[i] == '\t'
			|| str[i] == '\n') && str[i] != '\0')
			i++;
		if (str[i])
			count++;
		while (str[i] != ' ' && str[i] != '\t'
			&& str[i] != '\n' && str[i] != '\0')
			i++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		count;
	int		i;

	count = ft_count_words(str);
	tab = (char**)malloc(sizeof(char*) * (count + 1));
	i = 0;
	while (i < count)
	{
		tab[i] = put_words_in_tab(str, i + 1);
		i++;
	}
	tab[i] = 0;
	return (tab);
}
