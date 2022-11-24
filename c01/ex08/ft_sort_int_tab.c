/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 05:40:32 by msariasl          #+#    #+#             */
/*   Updated: 2022/07/27 13:27:24 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	orderbyascend(int *tab, int size)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a != size - 1)
	{
		if (tab[a] > tab[a + 1])
		{
			b = tab[a];
			c = tab[a + 1];
			tab[a] = c;
			tab[a + 1] = b;
			orderbyascend(tab, size);
		}
		a++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	if (size > 0)
		orderbyascend(tab, size);
}
