/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_numeric.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 09:27:16 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/26 11:55:46 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_numeric(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}
