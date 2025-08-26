/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 11:03:07 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/17 22:08:17 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief size*size のボードを標準出力に出力する関数
 * 
 * @param board int**型 board[行数][列数]
 * @param size int型 boardの行数、列数
 * @return void 
 */

#include <unistd.h>

void	output(int board[4][4], int size)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			c = board[i][j] + 48;
			write(1, &c, 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
