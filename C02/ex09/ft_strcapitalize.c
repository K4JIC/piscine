/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 21:01:48 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/19 10:00:10 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lower(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}

int	is_upper(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}

int	is_num_alp(char c)
{
	if (('a' <= c && c <= 'z')
		|| ('A' <= c && c <= 'Z')
		|| ('0' <= c && c <= '9'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	flag;
	char	*tmp;

	flag = 1;
	tmp = str;
	while (*str != '\0')
	{
		if (is_upper(*str))
			*str += 32;
		if (flag == 1)
		{
			if (is_lower(*str))
				*str -= 32;
		}
		flag = !is_num_alp(*str);
		str++;
	}
	return (tmp);
}
