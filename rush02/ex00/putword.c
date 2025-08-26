/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putword.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 17:07:12 by shshimiz          #+#    #+#             */
/*   Updated: 2025/08/23 23:01:13 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"
#include "printnumber.h"

// void put_word(char *str)
// {
// 	int len;
// 	int first_len;
// 	char c[4];
// 	int	count;

// 	count = 0;
// 	len = ft_strlen(str);
//     first_len = len % 3;//最初のcharのサイズ
// 	if (first_len == 0 && len >= 3)
// 		first_len = 3;
// 	while (first_len)
// 	{
// 		c[count] = str[count];
// 		count++;
// 		first_len--;
// 	}
// 	c[count] = '\0';
// 	if ()
// 		put_word()
// }

void	putword(char *str, int count, fig_word *dict)
{
	int		len;
	char	*head;
	char	*tail;

	if (!str) return ;
	len = ft_strlen(str);
	if (len == 0) return;
	if (len <= 3)
	{
		putnbr_ult(str, count, dict);
		return ;
	}
	head = ft_strndup(str, len - 3);
	if (!head) return ;
	tail = str + (len - 3);
	putword(head, count + 1, dict);
	putnbr_ult(tail, count, dict);
	free (head);
}