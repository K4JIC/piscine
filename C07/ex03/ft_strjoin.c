/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 00:10:35 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/25 13:22:58 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	total_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * (size - 1);
	return (len);
}

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*joined_str;
	int 	len;

	len = total_len(size, strs, sep);
	if (size == 0)
		len = 0;
	joined_str = (char *)malloc((len + 1) * 1);
	if (!joined_str)
		return (joined_str);
	i = 0;
	while (i < size)
	{
		ft_strcat(joined_str, strs[i]);
		if (i != size - 1)
			ft_strcat(joined_str, sep);
	}
	joined_str[i] = '\0';
	return (joined_str);
}
