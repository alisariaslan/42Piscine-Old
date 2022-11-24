/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:30:11 by msariasl          #+#    #+#             */
/*   Updated: 2022/07/28 15:46:53 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122)
			&& (str[i] < 48 || str[i] > 57))
		{
			if (str[i + 1] > 96 && str[i + 1] < 123)
				str[i + 1] -= 32;
		}
		else
		{
			if ((str[i + 1] > 64 && str[i + 1] < 91))
				str[i + 1] += 32;
			if (str[i] > 96 && str[i] < 123 && i == 0)
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
