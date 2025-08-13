/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 11:54:39 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/09 14:57:56 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char str[]);

void	minus_error(void)
{
	ft_putchar("must be x,y >= 1");
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		minus_error();

	int	x_countup;
	int y_countup;

	y_countup = 1;
	while (y_countup <= y)
	{
		x_countup = 1;
		while (x_countup <= x)
		{
			if (x_countup == 1 && y_countup ==1)
				ft_putchar("/");
			else if (x_countup == x && y_countup == 1)
				ft_putchar("\\");
			else if (x_countup == x && y_countup == y)
				ft_putchar("/");
			else if (x_countup == 1 && y_countup == y)
				ft_putchar("\\");
			else if (x_countup == 1 || y_countup == 1)
				ft_putchar("*");
			else if (x_countup == x || y_countup == y)
				ft_putchar("*");
			else
				ft_putchar(" ");
			x_countup ++;
		}
		ft_putchar("\n");
		y_countup ++;
	}
}