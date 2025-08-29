/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 11:55:51 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/28 22:39:22 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (i < length)
	{
		count += ((*f)(tab[i]) != 0);
		i++;
	}
	return (count);
}

// int has_nume(char *str)
// {
// 	int i = 0;

// 	while (str[i])
// 	{
// 		if ('0' <= str[i] && str[i] <= '9')
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

// #include <stdio.h>

// int main(void)
// {
// 	int res;

// 	res = 0;
// 	char *tab[] = {
// 		"saoifowe",
// 		"anor3hsd",
// 		"abo4ghws",
// 		0
// 	};
// 	res = ft_count_if(tab, 3, has_nume);
// 	printf("%d\n", res);
// 	return (0);
// }