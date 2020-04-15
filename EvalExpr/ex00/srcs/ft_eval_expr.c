/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_expr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 15:42:52 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/24 22:11:57 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_eval_expr.h"

int		ft_eval_expr(char *expr)
{
	char	oper;
	int		split;

	split = ft_find_split(expr);
	if (split == -1)
	{
		if (expr[0] == '(')
			return (ft_eval_expr(ft_remove_bracket(expr)));
		return (ft_atoi(expr));
	}
	oper = expr[split];
	expr[split] = '\0';
	if (oper == '+')
		return (ft_eval_expr(expr) + (ft_eval_expr(expr + split + 1)));
	else if (oper == '-')
		return (ft_eval_expr(expr) - (ft_eval_expr(expr + split + 1)));
	else if (oper == '*')
		return (ft_eval_expr(expr) * (ft_eval_expr(expr + split + 1)));
	else if (oper == '/')
		return (ft_eval_expr(expr) / (ft_eval_expr(expr + split + 1)));
	else if (oper == '%')
		return (ft_eval_expr(expr) % (ft_eval_expr(expr + split + 1)));
	return (0);
}

int		ft_skip_par(char *str, int beg)
{
	int i;
	int count_loop;

	count_loop = 1;
	i = beg;
	beg++;
	while (count_loop != 0 && str[beg])
	{
		if (str[beg] == '(')
			count_loop++;
		else if (str[beg] == ')')
			count_loop--;
		beg++;
	}
	return (beg);
}

int		ft_find_split(char *str)
{
	int i;
	int tmp1;
	int tmp2;

	i = 0;
	tmp1 = -1;
	tmp2 = -1;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			tmp1 = i;
		else if (str[i] == '(')
			i = ft_skip_par(str, i) - 1;
		else if (str[i] == '*' || str[i] == '/' || str[i] == '%')
			tmp2 = i;
		i++;
	}
	if (tmp1 != -1)
		return (tmp1);
	if (tmp2 != -1)
		return (tmp2);
	else
		return (-1);
}

char	*ft_remove_bracket(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	if (str[0] == '(' && str[i - 1] == ')')
	{
		str[i - 1] = '\0';
		str++;
	}
	return (str);
}
