/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 17:58:19 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/13 15:30:14 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printall(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' || b != '8' || c != '9')
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a < '8')
	{
		while (b < '9')
		{
			while (c < ':')
			{
				printall(a, b, c);
				c ++;
			}
			b ++;
			c = c - ('9' - '0') + (b - '0');
		}
		a ++;
		b = b - ('8' - '0') + (a - '0');
		c = c - ('8' - '0') + (a - '0');
	}
}
