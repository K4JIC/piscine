/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 18:53:51 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/12 21:41:56 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_alpha(char c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (check_alpha(*str))
			;
		else
			return (0);
		str++;
	}
	return (1);
}
