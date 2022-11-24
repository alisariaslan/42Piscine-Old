/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 11:26:37 by msariasl          #+#    #+#             */
/*   Updated: 2022/08/05 11:30:01 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	c;
	int	s;
	int	say;

	c = 0;
	s = 1;
	say = 0;
	while ((str[c] >= '\t' && str[c] <= '\r') || str[c] == ' ')
		c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			s *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		say = (str[c] - '0') + (say * 10);
		c++;
	}
	return (say * s);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
   printf("%d\n",ft_atoi(argv[1]));
}
*/
