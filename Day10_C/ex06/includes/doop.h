/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 22:00:57 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/20 11:14:21 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		check_validity(int argc, char **argv);
int		ft_error(int nb1, int *error);
int		doop(int nb1, int nb2, char ope, int *error);
int		sum(int nb1, int nb2);
int		soustraction(int nb1, int nb2);
int		multiplication(int nb1, int nb2);
int		division(int nb1, int nb2);
int		mod(int nb1, int nb2);
int		blank(char *str, int *is_negative);
int		ft_atoi(char *str);

#endif
