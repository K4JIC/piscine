/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 21:01:48 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/11 21:42:20 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_lower(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (check_lower(*str))
			;
		else
			return (0);
		str++;
	}
	return (1);
}
