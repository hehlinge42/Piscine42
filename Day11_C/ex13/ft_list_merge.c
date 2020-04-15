/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 16:58:40 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/28 18:37:51 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *elem;

	if (!(begin_list1))
	{
		*begin_list1 = begin_list2;
		return ;
	}
	elem = (*begin_list1);
	while (elem && elem->next)
		elem = elem->next;
	elem->next = begin_list2;
}
