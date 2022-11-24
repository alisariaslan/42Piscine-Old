/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:31:18 by msariasl          #+#    #+#             */
/*   Updated: 2022/11/21 21:31:27 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	size;

	size = 0;
	while (*s != 0)
	{
		size++;
		s++;
	}
	return (size);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == 0)
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != 0)
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *str, char *buff)
{
	size_t	i;
	size_t	j;
	char	*custom_str;

	if (!str)
	{
		str = (char *)malloc(1 * sizeof(char));
		str[0] = '\0';
	}
	if (!str || !buff)
		return (NULL);
	custom_str = malloc(sizeof(char) * ((ft_strlen(str) + ft_strlen(buff)) + 1));
	if (custom_str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (str)
		while (str[++i] != '\0')
			custom_str[i] = str[i];
	while (buff[j] != '\0')
		custom_str[i++] = buff[j++];
	custom_str[ft_strlen(str) + ft_strlen(buff)] = '\0';
	free(str);
	return (custom_str);
}

char	*ft_get_line(char *my_str)
{
	int		i;
	char	*custom_str;

	i = 0;
	if (!my_str[i])
		return (NULL);
	while (my_str[i] && my_str[i] != '\n')
		i++;
	custom_str = (char *)malloc(sizeof(char) * (i + 2));
	if (!custom_str)
		return (NULL);
	i = 0;
	while (my_str[i] && my_str[i] != '\n')
	{
		custom_str[i] = my_str[i];
		i++;
	}
	if (my_str[i] == '\n')
	{
		custom_str[i] = my_str[i];
		i++;
	}
	custom_str[i] = '\0';
	return (custom_str);
}

char	*ft_new_str(char *my_str)
{
	int		i;
	int		j;
	char	*custom_str;

	i = 0;
	while (my_str[i] && my_str[i] != '\n')
		i++;
	if (!my_str[i])
	{
		free(my_str);
		return (NULL);
	}
	custom_str = (char *)malloc(sizeof(char) * (ft_strlen(my_str) - i + 1));
	if (!custom_str)
		return (NULL);
	i++;
	j = 0;
	while (my_str[i])
		custom_str[j++] = my_str[i++];
	custom_str[j] = '\0';
	free(my_str);
	return (custom_str);
}