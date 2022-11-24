/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:30:11 by msariasl          #+#    #+#             */
/*   Updated: 2022/07/28 14:52:33 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	rtn;

	i = 0;
	rtn = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 97 || str[i] > 122))
			rtn = 0;
		i++;
	}
	return (rtn);
}
