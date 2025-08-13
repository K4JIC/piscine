/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:38:49 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/13 18:54:24 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_printable(char c)
{
	if (32 <= c && c <= 126)
		return (1);
	else
		return (0);
}

int	ft_putstr_non_printable(char *str)
{
	while (*str == '\0')
	{
		if (check_printable(*str))
		{
			
		}
	}
}
