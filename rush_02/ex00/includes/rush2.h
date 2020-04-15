/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 15:24:19 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/24 12:11:14 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH2_H
# define RUSH2_H

# define BUF_SIZE 1024

typedef	struct	s_struct
{
	char		*(*func)(int, int);
	char		*charset;
}				t_struct;

char			*rush00(int col, int lin);
char			*rush01(int col, int lin);
char			*rush02(int col, int lin);
char			*rush03(int col, int lin);
char			*rush04(int col, int lin);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
int				ft_strcmp(char *s1, char *s2);
void			ft_putchar(char c);
char			*ft_strcpy(char *dest, char *src);
char			*ft_realloc(char *old, int size);
char			*ft_read_buffer(int *count_char);
void			ft_lin_col(char *str, int *lin, int *col);
int				ft_init_struct(t_struct *tab_rush);
void			ft_test_rush(char *buf, int lin, int col);
void			ft_display_sol(int nb_sol, int rush, int lin, int col);

#endif
