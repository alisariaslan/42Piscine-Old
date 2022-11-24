/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 10:14:22 by msariasl          #+#    #+#             */
/*   Updated: 2022/08/05 10:18:21 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (*str != 0)
	{
		a++;
		str++;
	}
	return (a);
}
/*
#include <stdio.h>
int	main()
{
	char a[] = "  ";
	int c = ft_strlen(a);
	printf("%d\n",c);
}
*/
