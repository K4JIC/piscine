/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 21:08:59 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/28 12:26:10 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}

// #include <unistd.h>

// void	ft_putnbr(int nbr)
// {
// 	char	c;

// 	if (nbr == -2147483648)
// 	{
// 		write(1, "-2147483648", 11);
// 		return ;
// 	}
// 	if (nbr < 0)
// 	{
// 		write(1, "-", 1);
// 		nbr *= -1;
// 	}
// 	if (nbr >= 10)
// 		ft_putnbr(nbr / 10);
// 	c = nbr % 10 + '0';
// 	write(1, &c, 1);
// }

// int main(void)
// {
// 	int	tab[7] = {1, 4, 5, 7, 34, 12, -21};

// 	ft_foreach(tab, 7, &ft_putnbr);
// 	return (0);
// }