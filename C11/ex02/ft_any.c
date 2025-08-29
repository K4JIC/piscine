/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 11:34:02 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/28 11:53:54 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int(*f)(char*))
{
	int	len;
	int	i;

	len = 0;
	while (tab[len])
		len++;
	i = 0;
	while (i < len)
	{
		if((*f)(tab[i]))
			return (1);
		i++;
	}
	return (0);
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
// 		"aborghws",
// 		0
// 	};
// 	res = ft_any(tab, has_nume);
// 	printf("%d\n", res);
// 	return (0);
// }