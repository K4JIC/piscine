/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 21:01:48 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/18 18:21:25 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_lower(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}

char	*ft_strupcase(char *str)
{
	char	*tmp;

	tmp = str;
	while (*str != '\0')
	{
		if (check_lower(*str))
			*str -= 32;
		str++;
	}
	return (tmp);
}
