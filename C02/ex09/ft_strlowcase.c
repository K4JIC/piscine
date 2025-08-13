/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 21:01:48 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/13 16:35:06 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_lower(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}

int	check_non_num_non_alp(char c)
{
	if (('a' <= c && c <= 'z')
		|| ('A' <= c && c <= 'Z')
		|| ('0' <= c && c <= '9'))
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	flag;

	flag = 1;
	while (*str != '\0')
	{
		if (flag == 1)
		{
			if (check_lower(*str))
				*str -= 32;
		}
		flag = check_non_num_non_alp(*str);
		str++;
	}
	return (str);
}
