/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 19:05:31 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/20 22:12:49 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_advanced_doop.h"

int		ft_error(int nb1, int *error)
{
	if (nb1 == 0)
	{
		*error = 1;
		return (1);
	}
	return (0);
}

int		ft_usage(int nb1, int nb2)
{
	(void)nb1;
	(void)nb2;
	ft_putstr("error : only [ + - * / % ] are accepted.\n");
	return (0);
}
