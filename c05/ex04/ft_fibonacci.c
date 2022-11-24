/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 20:47:37 by msariasl          #+#    #+#             */
/*   Updated: 2022/08/05 20:47:39 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	italiano;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
	{
		italiano = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (italiano);
	}
	else
		return (-1);
}
/*
#include <stdio.h>
int	main(void)
{
	int a = ft_fibonacci(94);
	printf("%d", a);
}*/