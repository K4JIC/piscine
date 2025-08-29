/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 12:26:32 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/28 22:40:53 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	up;
	int	dw;

	i = 0;
	up = 1;
	dw = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			dw = 0;
		if (f(tab[i], tab[i + 1]) > 0)
			up = 0;
		i++;
	}
	if (up || dw)
		return (1);
	return (0);
}

// #include <stdio.h>

// int	minus(int a, int b) {return (a - b);}

// int main(void)
// {
// 	int tab1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// 	int tab2[10] = {1, 2, 3, 4, 5, 6, -7, 8, 9, 10};
// 	int tab3[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
// 	int tab4[10] = {10, 9, 8, 7, 6, 4, 4, 2, 2, 1};
// 	int res1;
// 	int res2;
// 	int res3;
// 	int res4;

// 	res1 = ft_is_sort(tab1, 10, &minus);
// 	printf("%d\n", res1);
// 	res2 = ft_is_sort(tab2, 10, &minus);
// 	printf("%d\n", res2);
// 	res3 = ft_is_sort(tab3, 10, &minus);
// 	printf("%d\n", res3);
// 	res4 = ft_is_sort(tab4, 10, &minus);
// 	printf("%d\n", res4);
// }