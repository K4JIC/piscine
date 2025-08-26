/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 01:27:49 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/25 12:49:20 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

void test(int size, char **strs, char *sep)
{
	char *res;
	res = ft_strjoin(size, strs, sep);
	printf("%s\n", res);
	free(res);
}


int	main(void)
{
	char	*strs1[] = {"hello","world","!!"};
	char	*sep1 = "--";
	char	*strs2[] = {"", "Hello", "", "world"};
	test(3, strs1, sep1);
	test(4, strs2, sep1);
	return (0);
}