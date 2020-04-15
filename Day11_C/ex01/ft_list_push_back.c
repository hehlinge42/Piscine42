/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 10:49:02 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/28 21:00:57 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new_block;
	t_list *block;

	new_block = ft_create_elem(data);
	if (!(begin_list))
		*begin_list = new_block;
	else
	{
		block = *begin_list;
		while (block->next)
		{
			block = block->next;
		}
		block->next = new_block;
	}
}
