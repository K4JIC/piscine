/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 22:51:40 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/28 11:33:20 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*res;
	int	i;

	res = (int *) malloc((length + 1) * sizeof(int));
	i = 0;
	while (i < length)
	{
		res[i] = (*f)(tab[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}


// #include <stdio.h>

// int plus2(int i) {return (i + 2);}

// int main(void)
// {
// 	int tab[4] = {1, 2, 3, 4};
// 	int len = 4;
// 	int *res;

// 	res = ft_map(tab, len, &plus2);
// 	int i = 0;
// 	while (i < len)
// 	{
// 		printf("%d, ", res[i]);
// 		i++;
// 	}
// 	return (0);
// }