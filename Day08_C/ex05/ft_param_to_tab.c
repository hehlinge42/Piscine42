/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 15:08:46 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/20 13:39:51 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

char				*ft_strcpy(char *dest, char *src)
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

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_par	*tab_res;

	i = 0;
	tab_res = (struct s_stock_par*)malloc(sizeof(struct s_stock_par)
		* (ac + 1));
	tab_res[ac].str = 0;
	while (i < ac)
	{
		tab_res[i].size_param = ft_strlen(av[i]);
		tab_res[i].str = av[i];
		tab_res[i].copy = (char*)malloc(sizeof(char)
			* (tab_res[i].size_param + 1));
		ft_strcpy(tab_res[i].copy, av[i]);
		tab_res[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	return (tab_res);
}
