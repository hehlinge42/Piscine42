/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 17:44:46 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/14 21:30:18 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	**ft_split_whitespaces(char *str);
void	ft_print_words_tables(char **tab);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
	char **tab;
	char str[] = "		Je fais		\n une\n	ligne de	 test   ";

	tab = ft_split_whitespaces(str);
	ft_print_words_tables(tab);
}
