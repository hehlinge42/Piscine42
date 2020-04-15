/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 22:00:57 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/20 22:14:36 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ADVANCED_DOOP_H
# define FT_ADVANCED_DOOP_H

# include <unistd.h>

typedef	struct	s_opp
{
	char	*oper;
	int		(*func)(int, int);
}				t_opp;

void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
int				ft_usage(int nb1, int nb2);
int				ft_strlen(char *str);
int				ft_strcmp(char *s1, char *s2);
int				check_validity(char **argv, int nb1, int nb2);
int				ft_error(int nb1, int *error);
int				doop(int nb1, int nb2, char ope, int *error);
int				ft_add(int nb1, int nb2);
int				ft_sub(int nb1, int nb2);
int				ft_mul(int nb1, int nb2);
int				ft_div(int nb1, int nb2);
int				ft_mod(int nb1, int nb2);
int				blank(char *str, int *is_negative);
int				ft_atoi(char *str);

#endif
