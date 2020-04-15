/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 10:49:02 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/28 18:33:41 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*block;

	if (!(begin_list))
		return (0);
	else
	{
		block = begin_list;
		while (block->next)
		{
			block = block->next;
		}
	}
	return (block);
}
