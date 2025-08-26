/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 22:26:16 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/25 05:51:23 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putstr(char *str)
{
	if (*str == 0)
		return ;
	write(1, str, 1);
	putstr(++str);
}

int	main(int argc, char **argv)
{
	argc -= 1;
	while (argc--)
	{
		putstr(argv[argc + 1]);
		write(1, "\n", 1);
	}
	return (0);
}
