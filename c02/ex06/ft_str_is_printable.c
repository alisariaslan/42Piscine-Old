/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:30:11 by msariasl          #+#    #+#             */
/*   Updated: 2022/07/28 15:01:48 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	rtn;

	i = 0;
	rtn = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 32) || (str[i] == 127))
			rtn = 0;
		i++;
	}
	return (rtn);
}
