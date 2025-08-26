/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 23:05:15 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/26 18:48:54 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

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
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
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

void	set_index(int ctoi[128], char *base)
{
	int	i;
	int	j;

	i = 0;
	while (i < 128)
	{
		ctoi[i] = -1;
		i++;
	}
	j = 0;
	while (j < ft_strlen(base))
	{
		ctoi[(int)base[j]] = j;
		j++;
	}
}

char	*skip_symbol(char *str, int *sign)
{
	int	i;

	i = 0;
	*sign = 1;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*sign *= -1;
		i++;
	}
	return (&str[i]);
}

int	ft_atoi_base(char *str, char *base)
{
	int	ctoi[128];
	int	len;
	int	res;
	int	sign;

	if (!valid_base(base))
		return (0);
	set_index(ctoi, base);
	res = 0;
	sign = 1;
	len = ft_strlen(base);
	str = skip_symbol(str, &sign);
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	while (ctoi[(int)*str] >= 0)
	{
		res = res * len + ctoi[(int)*str];
		str++;
	}
	return (res * sign);
}

// int main(int argc, char **argv)
// {
// 	int nbr;
// 	(void)argc;
// 	nbr = ft_atoi_base(argv[1], argv[2]);
// 	printf("%d\n", nbr);
// 	return (0);
// }