/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:53:21 by msariasl          #+#    #+#             */
/*   Updated: 2022/08/11 13:53:27 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int		rng;
	int		i;
	int		*capacity;
	int		*d;

	if (min >= max)
		return (0);
	rng = max - min;
	capacity = malloc(rng * sizeof(int));
	d = capacity;
	if (!d)
		return (0);
	i = 0;
	while (i < rng)
	{
		capacity[i] = min + i;
		i++;
	}
	return (capacity);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i;
	int	size;

	i = 0;
	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
*/