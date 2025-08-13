/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:18:20 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/13 21:39:26 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief ascii_to_integer char* 型で与えられた文字列の最初の部分を int 型に変換します。
 * 
 * たとえば、char* 型の"42tokyo"の文字列を受け取って、int 型の 42 に変換します。
 * 
 * @param *str 受け取る文字列
 * @return 変換後の値(int 型), エラーの場合は0
 */

#include <stdio.h>
#include <stdlib.h>

int	my_atoi(char *str)
{
	int	num;

	num = 0;
	while ('0' <= *str && *str <= '9')
	{
		num += *str - '0';
		num *= 10;
		str ++;
	}
	num /= 10;
	return (num);
}

int	main(void)
{
	char	*case1 = "42tokyo";

	printf("input : %s\n", case1);
	printf("my_atoi : %d\n", my_atoi(case1));
	printf("atoi : %d\n\n", atoi(case1));

	char	*case2 = "-105";

	printf("input : %s\n", case2);
	printf("my_atoi : %d\n", my_atoi(case2));
	printf("atoi : %d\n\n", atoi(case2));
}