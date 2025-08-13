/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 19:16:28 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/11 14:29:47 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*searchminadd(int li[], int size)
{
	int	i;
	int	min;
	int	*minadd;

	i = 0;
	min = 2147483647;
	while (i < size)
	{
		if (li[i] <= min)
		{
			min = li[i];
			minadd = &li[i];
		}
		i++;
	}
	return (minadd);
}

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	*minadd;
	int	count;

	count = 0;
	while (count < size)
	{
		minadd = searchminadd(tab, size - count);
		ft_swap(tab, minadd);
		count++;
		tab++;
	}
}
