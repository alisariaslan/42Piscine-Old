/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:12:48 by msariasl          #+#    #+#             */
/*   Updated: 2022/08/11 14:12:48 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		a;
	int		c;

	s = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		a = 0;
		while (strs[i][a] != '\0')
		{
			s[c++] = strs[i][a++];
		}
		a = 0;
		while (sep[a] != '\0' && i != size - 1)
		{
			s[c++] = sep[a++];
		}
		i++;
	}
	s[c] = '\0';
	return (s);
}
