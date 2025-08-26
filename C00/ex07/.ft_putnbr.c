/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:58:15 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/14 17:52:25 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long	ft_revnbr(int nb)
{
	long	revnb;

	revnb = 0;
	while (nb > 0)
	{
		revnb += nb % 10;
		nb /= 10;
		revnb *= 10;
	}
	revnb /= 10;
	return (revnb);
}

void	print_nutural_nbr(int nb)
{
	char	opnb;
	long		revnb;

	revnb = ft_revnbr(nb);
	while (revnb > 0)
	{
		opnb = revnb % 10 + '0';
		write(1, &opnb, 1);
		revnb /= 10;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
		write(1, "0", 1);
	if (nb == -2147483648)
		write(1, "-2147483648", 12);
	else if (nb >= 0)
		print_nutural_nbr(nb);
	else
	{
		nb *= -1;
		write(1, "-", 1);
		print_nutural_nbr(nb);
	}
}
