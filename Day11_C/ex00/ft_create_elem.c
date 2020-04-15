/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 10:09:36 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/28 18:31:12 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list *newlist;

	if (!(newlist = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	newlist->data = data;
	newlist->next = NULL;
	return (newlist);
}
