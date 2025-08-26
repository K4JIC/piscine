/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 14:37:01 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/21 13:33:23 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	output_nbr(long nbr, char *base, long len)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		output_nbr(-(long)nbr, base, len);
		return ;
	}
	if (nbr >= len)
		output_nbr(nbr / len, base, len);
	write (1, &base[nbr % len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (valid_base(base))
		output_nbr((long)nbr, base, ft_strlen(base));
	return ;
}

// #include <stdlib.h>

// int main(int argc, char **argv)
// {
// 	(void)argc;
// 	ft_putnbr_base(atoi(argv[1]), argv[2]);
// 	return (0);
// }