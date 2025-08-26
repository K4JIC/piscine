/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 17:14:22 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/17 22:07:02 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "utils.h"

int	main(int argc, char **argv)
{
	int	board[4][4];
	int	label[4][4];
	int	i;
	int	j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			board[i][j] = 0;
			label[i][j] = 0;
			j++;
		}
		i++;
	}
	if (argc != 2)
	{
		write(1, "Error!\n", 8);
		return (1);
	}
	set_label(label, argv[1]);
	solve(board, label, 0);
	output(board, SIZE);
}
