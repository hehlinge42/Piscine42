/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 15:47:19 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/14 17:35:04 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_concat_params(int argc, char **argv);

int main(int argc, char **argv)
{
	char *str;

	str = ft_concat_params(argc, argv);
	printf("%s", str);
}
