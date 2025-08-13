/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 21:01:48 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/11 21:28:31 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_printable(char c)
{
	if (32 <= c && c <= 126)
		return (1);
	else
		return (0);
}

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (check_printable(*str))
			;
		else
			return (0);
		str++;
	}
	return (1);
}
