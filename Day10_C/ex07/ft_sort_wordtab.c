/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 13:54:26 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/21 09:55:51 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	char	*mid;

	i = 0;
	j = 1;
	if (tab[0] != 0 && tab[0] != 0)
	{
		while (tab[j] != 0)
		{
			i = 0;
			while (i < j)
			{
				if (ft_strcmp(tab[i], tab[j]) > 0)
				{
					mid = tab[i];
					tab[i] = tab[j];
					tab[j] = mid;
				}
				i++;
			}
			j++;
		}
	}
}
