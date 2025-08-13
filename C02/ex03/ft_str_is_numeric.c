/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 20:58:30 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/11 21:59:09 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_nume(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (check_nume(*str))
			;
		else
			return (0);
		str++;
	}
	return (1);
}
