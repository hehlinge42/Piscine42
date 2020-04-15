/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 12:51:08 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/10 19:38:52 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else if (nb > 0 && nb <= 12)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else
		return (nb * ft_recursive_factorial(nb + 1));
}
