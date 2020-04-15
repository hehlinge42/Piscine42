/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 16:07:41 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/28 21:25:22 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*begin_list;
	t_list	*tmp;

	i = 0;
	if (ac <= 0)
		return (0);
	tmp = 0;
	while (i < ac)
	{
		begin_list = ft_create_elem(av[i]);
		begin_list->next = tmp;
		tmp = begin_list;
		i++;
	}
	return (begin_list);
}
