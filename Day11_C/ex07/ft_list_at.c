/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 14:32:37 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/28 21:40:11 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int i;

	i = 1;
	if (!(begin_list))
		return (0);
	while (begin_list->next && ++i <= nbr)
	{
		begin_list = begin_list->next;
	}
	if (i - 1 == nbr)
		return (begin_list);
	else
		return (0);
}
