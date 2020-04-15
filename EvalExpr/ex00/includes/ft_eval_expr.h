/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_expr.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 18:28:17 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/24 22:14:25 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EVAL_EXPR_H
# define FT_EVAL_EXPR_H

int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
int		eval_expr(char *expr);
int		ft_eval_expr(char *expr);
int		ft_skip_par(char *str, int beg);
int		ft_find_split(char *str);
int		ft_char_in_str(char c, char *charset);
char	*ft_remove_whtsp(char *str);
int		ft_find_split(char *str);
int		ft_eval_expr(char *expr);
char	*ft_remove_bracket(char *str);

#endif
