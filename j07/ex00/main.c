/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 16:39:59 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/13 17:35:25 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strdup(char *src);

int main()
{
	char str[] = "Il a pas dit bonjour";
	char *cpy;
	cpy = ft_strdup(str);
	printf("Chaine en retour : %s", cpy);
}
