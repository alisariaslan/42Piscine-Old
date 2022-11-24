/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:31:14 by msariasl          #+#    #+#             */
/*   Updated: 2022/11/21 22:41:44 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

char	*get_next_line(int fd);
char	*get_next_read(int fd, char *str);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *str, char *buff);
size_t	ft_strlen(const char *s);
char	*ft_get_line(char *str);
char	*ft_new_str(char *str);

#endif