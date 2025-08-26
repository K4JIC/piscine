/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:32:04 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/21 14:26:41 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	draw_board(int board[10])
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		if (board[i] < 0)
			c = 'E';
		else
			c = board[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	is_valid_queen(int board[10], int index, int value)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (board[i] == value)
			return (0);
		if (board[i] - value == index - i
			|| value - board[i] == index - i)
			return (0);
		i++;
	}
	return (1);
}

int	solve(int *board, int depth, int *count)
{
	int	n;

	n = 0;
	if (depth == 10)
	{
		draw_board(board);
		*count += 1;
		return (0);
	}
	while (n < 10)
	{
		board[depth] = n;
		if (!is_valid_queen(board, depth, n))
			;
		else if (solve(board, depth + 1, count))
			return (1);
		n++;
	}
	if (depth == 0)
		return (1);
	board[depth] = -1;
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	count;
	int	i;

	count = 0;
	i = -1;
	while (++i < 10)
		board[i] = -1;
	solve(board, 0, &count);
	return (count);
}

// int main(void)
// {
// 	int i = ft_ten_queens_puzzle();
// 	printf("%d\n", i);
// 	return (0);
// }
