/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 04:36:48 by msariasl          #+#    #+#             */
/*   Updated: 2022/07/27 11:51:45 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		temp;
	int		a;

	a = 0;
	while (a < size / 2)
	{
		temp = tab[a];
		tab[a] = tab[size - 1 - a];
		tab[size - 1 - a] = temp;
		a++;
	}
}
