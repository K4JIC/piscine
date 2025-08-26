/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 11:06:25 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/25 04:28:06 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*r_array;
	int	i;

	if (min >= max)
		return (0);
	r_array = (int *)malloc((max - min) * sizeof(int));
	i = 0;
	while (i < max - min)
	{
		r_array[i] = min + i;
		i++;
	}
	return (r_array);
}
