/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 14:07:44 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/28 18:37:21 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *elem;
	t_list *tmp;

	if (!(*begin_list))
		return ;
	while ((*begin_list) && (*cmp)((*begin_list)->data, data_ref) == 0)
	{
		tmp = (*begin_list)->next;
		free(*begin_list);
		*begin_list = tmp;
	}
	elem = (*begin_list);
	while (elem && elem->next)
	{
		if ((*cmp)((elem)->next->data, data_ref) == 0)
		{
			tmp = (elem)->next;
			(elem)->next = (elem)->next->next;
			free(tmp);
		}
		else
			(elem) = (elem)->next;
	}
}
