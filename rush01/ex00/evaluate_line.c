/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evaluate_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 18:34:52 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/17 19:53:02 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

// 見える箱をカウント
static int	count_visible(int *line)
{
	int	count;
	int	i;
	int	max;

	count = 0;
	i = 0;
	max = 0;
	while(i < SIZE)
	{
		if (line[i] > max)
			{
				max = line[i];
				count++;
			}
		i++;
	}
	return (count);
}

// 行が条件を満たすかチェック
int	is_correct_row(int board[4][4], int label[4][4], int row)
{
	int	orig[4];
	int	rev[4];
	int	i;

	i = 0;
	while (i < SIZE)
	{
		orig[i] = board[row][i];
		i++;
	}
	rev4(rev, orig);
	if ((count_visible(orig) == label[2][row])
	&& count_visible(rev) == label[3][row])
		return (1);
	return (0);
}

// 列が条件を満たすかチェック
int	is_correct_col(int board[4][4], int label[4][4], int col)
{
	int	orig[4];
	int	rev[4];
	int	i;

	i = 0;
	while (i < SIZE)
	{
		orig[i] = board[i][col];
		i++;
	}
	rev4(rev, orig);
	if ((count_visible(orig) == label[0][col])
	&& count_visible(rev) == label[1][col])
		return (1);
	return (0);
}