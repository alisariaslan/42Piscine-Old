/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:30:11 by msariasl          #+#    #+#             */
/*   Updated: 2022/07/28 14:56:27 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	rtn;

	i = 0;
	rtn = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90))
			rtn = 0;
		i++;
	}
	return (rtn);
}
