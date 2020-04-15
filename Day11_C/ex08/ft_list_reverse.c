/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 14:55:54 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/28 18:35:34 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *tmp_next;
	t_list *tmp_beg;
	t_list *elem;

	elem = *begin_list;
	if (!(*begin_list))
		return ;
	while (elem->next)
	{
		tmp_next = elem->next->next;
		tmp_beg = (*begin_list);
		*begin_list = elem->next;
		(*begin_list)->next = tmp_beg;
		elem->next = tmp_next;
	}
}
