/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 18:28:53 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/17 22:01:10 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_num(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

void	set_label(int label[4][4], char *str)
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			if (is_num(*str))
			{
				label[row][col] = (int)(*str - '0');
				col++;
			}
			str++;
		}
		row++;
	}
}
