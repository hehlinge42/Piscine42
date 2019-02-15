/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 17:44:46 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/14 21:25:09 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int	main(int ac, char **av)
{
	(void)ac;
	char ** tab;
//	char str[] = "		Je fais		\n une\n	ligne de	 test   ";
	//char str2[] = "						";
	int i = 0;
	tab = ft_split_whitespaces(av[1]);
	while (tab[i] != 0)
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
