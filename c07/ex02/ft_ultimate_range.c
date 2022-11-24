/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:54:48 by msariasl          #+#    #+#             */
/*   Updated: 2022/08/11 13:54:50 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	bnd;
	int	i;
	int	*capacity;
	int	*d;

	if (min >= max)
		return (0);
	bnd = max - min;
	capacity = malloc(bnd * sizeof(int));
	if (!capacity)
		return (-1);
	*range = capacity;
	i = 0;
	while (i < bnd)
	{
		capacity[i] = min + i;
		i++;
	}
	return (bnd);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i;

	i = 0;
	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
*/