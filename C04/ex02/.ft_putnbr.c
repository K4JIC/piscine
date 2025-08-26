/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:04:28 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/19 22:29:15 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	put_nutural_nb(int nb)
{
	char	c;

	c = nb % 10 + '0';
	if (nb / 10 == 0)
	{
		write(1, &c, 1);
		return (1);
	}
	if (put_nutural_nb(nb / 10))
	{
		write(1, &c, 1);
		return (1);
	}
	return (0);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb >= 0)
		put_nutural_nb(nb);
	else
	{
		write(1, "-", 1);
		put_nutural_nb(nb * -1);
	}
}