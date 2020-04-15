/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 12:51:08 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/11 14:32:22 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int result;

	if (nb < 0 || nb > 12)
		return (0);
	else
	{
		i = 1;
		if (nb < 0)
		{
			result = -1;
			nb = -nb;
		}
		else
			result = 1;
		while (i <= nb)
		{
			result *= i;
			i++;
		}
		return (result);
	}
}
