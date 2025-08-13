/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:45:19 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/13 19:50:32 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(int a, int b)
{
	char	lt;
	char	lo;
	char	rt;
	char	ro;

	lt = a / 10 + '0';
	lo = a % 10 + '0';
	rt = b / 10 + '0';
	ro = b % 10 + '0';
	write(1, &lt, 1);
	write(1, &lo, 1);
	write(1, " ", 1);
	write(1, &rt, 1);
	write(1, &ro, 1);
	if (a != 98 || b != 99)
		write(1, ",", 1);
		write(1, " ", 1);
}

void	ft_print_comb2(void)
{
	int	left;
	int	right;

	left = 0;
	while (left <= 99)
	{
		right = left + 1;
		while (right <= 99)
		{
			print_numbers(left, right);
			right++;
		}
		left++;
	}
}
