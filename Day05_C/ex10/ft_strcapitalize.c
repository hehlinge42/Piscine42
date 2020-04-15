/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 14:12:02 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/12 16:48:32 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a'
			&& str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9'))
		{
			if (j == 0 && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if (j > 0 && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			i++;
			j++;
		}
		while (str[i] <= '0' && str[i] >= '9' && str[i] <= 'a' && str[i] >= 'z'
			&& str[i] <= 'A' && str[i] >= 'Z')
			i++;
		i++;
	}
	return (str);
}
