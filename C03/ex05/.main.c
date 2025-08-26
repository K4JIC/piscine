/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 14:52:54 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/20 20:44:57 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

void test(char *dest, char *src, unsigned int size){
	unsigned int ft;
	unsigned int org;
	char destcpy1[256];
	char destcpy2[256];

	strcpy(destcpy1, dest);
	strcpy(destcpy2, dest); 
	ft = ft_strlcat(destcpy1, src, size);
	org = strlcat(destcpy2, src, size);

	printf("ft_strlcat\nreturn : %d\nstring : %s\n", ft, destcpy1);
	printf("strlcat\nreturn : %d\nstring : %s\n", org, destcpy2);
}

int main(void){
	char *dest1 = "tokugawa ";
	char *str1 = "ieyasu";

	test(dest1, str1, 12);
	return 0;
}