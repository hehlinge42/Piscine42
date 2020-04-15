/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 17:47:22 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/18 21:15:01 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_char_in_str(char str, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (str == charset[i])
			return (1);
		i++;
	}
	return (0);
}

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

char	*put_words_in_tab(char *str, char *charset, int word_number)
{
	int		i;
	int		count;
	char	*tab;
	int		end;

	i = 0;
	count = 0;
	while (str[i] && count < word_number)
	{
		while (str[i] && ft_char_in_str(str[i], charset) == 1)
			i++;
		if (str[i])
			count++;
		while (str[i] && ft_char_in_str(str[i], charset) == 0)
			i++;
	}
	end = i;
	while (ft_char_in_str(str[i - 1], charset) == 0 && i - 1 >= 0)
		i--;
	tab = (char*)malloc(sizeof(char) * (end - i + 1));
	ft_strcpy(tab, str, i, end);
	return (tab);
}

int		ft_count_words(char *str, char *charset)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && ft_char_in_str(str[i], charset) == 1)
			i++;
		if (str[i])
			count++;
		while (str[i] && ft_char_in_str(str[i], charset) == 0)
			i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		count;
	int		i;

	count = ft_count_words(str, charset);
	tab = (char**)malloc(sizeof(char*) * (count + 1));
	i = 0;
	while (i < count)
	{
		tab[i] = put_words_in_tab(str, charset, i + 1);
		i++;
	}
	tab[i] = 0;
	return (tab);
}
