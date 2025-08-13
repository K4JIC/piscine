/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 21:04:26 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/11 21:41:55 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_upper(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (check_upper(*str))
			;
		else
			return (0);
		str++;
	}
	return (1);
}
