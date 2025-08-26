/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:25:17 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/21 21:07:00 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}


// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char **argv)
// {
// 	int i;

// 	(void)argc;
// 	i = atoi(argv[1]);
// 	printf("%d\n", ft_find_next_prime(i));
// 	return (0);
// }
