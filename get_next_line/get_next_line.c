/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:31:16 by msariasl          #+#    #+#             */
/*   Updated: 2022/11/21 21:31:27 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_read(int fd, char *str)
{
	char	*buff;
	int		rbytes;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	rbytes = 1;
	while (!ft_strchr(str, '\n') && rbytes != 0)
	{
		rbytes = read(fd, buff, BUFFER_SIZE);
		if (rbytes == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[rbytes] = '\0';
		str = ft_strjoin(str, buff);
	}
	free(buff);
	return (str);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	str = get_next_read(fd, str);
	if (!str)
		return (NULL);
	line = ft_get_line(str);
	str = ft_new_str(str);
	return (line);
}
