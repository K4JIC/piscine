/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evaluate_cell.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 11:10:54 by kmaruyam          #+#    #+#             */
/*   Updated: 2025/08/17 20:47:07 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 4

// 行の被りチェック
static int	is_unique_in_row(int board[4][4], int row, int n)
{
	int i;
	i = 0;
	
	while(i < SIZE)
	{
		if (board[row][i] == n)
			return (0);
		i++;
	}
	return (1);
}


// 列の被りチェック
static int	is_unique_in_col(int board[4][4], int col, int n)
{
	int i;
	i = 0;
	
	while(i < SIZE)
	{
		if (board[i][col] == n)
			return (0);
		i++;
	}
	return (1);
}

// 入力が縦横に被りないかチェック
int	is_unique_cell(int board[4][4], int col, int row, int n)
{
	if (is_unique_in_row(board, row, n) && is_unique_in_col(board, col, n))
		return (1);
	return (0);
}

// 空のセルがないかチェック
int	is_fulfilled(int board[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row < SIZE)
	{
		col = 0;
		while (col < SIZE)
		{
			if (board[row][col] == 0)
				return (0);
		}
	}
	return (1);
}
