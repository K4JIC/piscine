/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 21:01:48 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/18 18:21:46 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_upper(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}

char	*ft_strlowcase(char *str)
{
	char	*tmp;

	tmp = str;
	while (*str != '\0')
	{
		if (check_upper(*str))
			*str += 32;
		str++;
	}
	return (tmp);
}
