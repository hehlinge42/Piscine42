/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 11:49:03 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/24 22:39:08 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush2.h"
#include <unistd.h>
#include <stdlib.h>

int	main(void)
{
	char	*buf;
	int		lin;
	int		col;
	int		count_char;

	count_char = 0;
	lin = 0;
	col = 0;
	buf = ft_read_buffer(&count_char);
	ft_lin_col(buf, &lin, &col);
	if (lin * (col + 1) != count_char || buf[0] == '\n')
	{
		ft_putstr("aucune");
		return (0);
	}
	if ((lin == 0 && col == 0) || (!(buf)))
	{
		ft_putstr("Empty input matches an infinite number of combinations\n");
		return (0);
	}
	else
		ft_test_rush(buf, lin, col);
	ft_putchar('\n');
	free(buf);
	return (0);
}
