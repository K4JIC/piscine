/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 19:54:56 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/17 23:07:52 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 4

int	is_unique_cell(int board[4][4], int col, int row, int n);
int	is_correct_row(int board[4][4], int label[4][4], int row);
int	is_correct_col(int board[4][4], int label[4][4], int col);

int	solve(int board[4][4], int label[4][4], int depth)
{
	int	n;
	int	row;
	int	col;

	n = 0;
	if (depth == SIZE * SIZE)
		return (1);
	while (++n < SIZE + 1)
	{
		row = depth / SIZE;
		col = depth % SIZE;
		if (is_unique_cell(board, col, row, n))
		{
			board[row][col] = n;
			if (col == SIZE - 1 && !is_correct_row(board, label, row))
				board[row][col] = 0;
			else if (row == SIZE - 1 && !is_correct_col(board, label, col))
				board[row][col] = 0;
			else if (solve(board, label, depth + 1))
				return (1);
			else
				board[row][col] = 0;
		}
	}
	return (0);
}
