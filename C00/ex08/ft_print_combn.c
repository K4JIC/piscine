/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_cmbn.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:22:40 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/13 17:36:41 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_revnbr(int nb)
{
	int	revnb;

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

static void	print_nutural_nbr(int nb, int n)
{
	char	chnb;
	int		revnb;

	revnb = ft_revnbr(nb);
	while (revnb > 0)
	{
		chnb = revnb % 10 + '0';
		write(1, &chnb, 1);
		revnb /= 10;
	}
	if ((n == 1 && nb == 9)
		|| (n == 2 && nb == 89)
		|| (n == 3 && nb == 789)
		|| (n == 4 && nb == 6789)
		|| (n == 5 && nb == 56789)
		|| (n == 6 && nb == 456789)
		|| (n == 7 && nb == 3456789)
		|| (n == 8 && nb == 23456789)
		|| (n == 9 && nb == 123456789))
		printf("\nn=%d, nb=%d\n", n, nb);
	else
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

static int	power(int org, int odr)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (i < odr)
	{
		result *= org;
		i++;
	}
	return (result);
}

static int	print_or_not(int nb, int size)
{
	int	count;

	count = 0;
	while (count < size - 1)
	{
		if (nb % 10 <= nb / 10 % 10)
		{
			return (0);
		}
		nb /= 10;
		count++;
	}
	return (1);
}

int	ft_print_combn(int n)
{
	int	nbr;

	nbr = 0;
	if (n == 9)
	{
		write(1, "012345678, 012345679, 012345689, 012345789, 012346789, ", 56);
		write(1, "012356789, 012456789, 013456789, 023456789, 123456789", 54);
		return (0);
	}
	while (nbr < power(10, n))
	{
		if (print_or_not(nbr, n))
		{
			if (nbr / power(10, n - 1) == 0)
				write(1, "0", 1);
			print_nutural_nbr(nbr, n);
		}
		nbr++;
	}
	return (0);
}
