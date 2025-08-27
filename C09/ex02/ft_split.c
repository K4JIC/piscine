/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 11:57:59 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/27 23:58:30 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strndup(char *str, int n)
{
	int		i;
	char	*res;

	res = (char *)malloc((n + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (str[i] && i < n)
	{
		res[i] = str[i];
		i++;
	}
	res[i] = 0;
	return (res);
}

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_word(char *str, char *charset)
{
	int	flag;
	int	count;
	int	i;

	flag = 1;
	count = 0;
	i = 0;
	while (str[i])
	{
		if (!is_charset(str[i], charset) && flag)
			count++;
		flag = 0;
		if (is_charset(str[i], charset))
			flag = 1;
		i++;
	}
	return (count);
}

char	*ft_get_next_word(char *str[], char *charset)
{
	char	*res;
	char	*start;
	char	*end;
	int		i;

	i = 0;
	start = &((*str)[i]);
	while ((*str)[i] && !is_charset((*str)[i], charset))
		i++;
	end = &((*str)[i]);
	res = ft_strndup(start, end - start);
	if (res == NULL)
		return (NULL);
	while ((*str)[i] && is_charset((*str)[i], charset))
		i++;
	(*str) = &(*str)[i];
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	int		words;
	char	**res;
	int		i;

	words = ft_count_word(str, charset);
	res = (char **) malloc((words + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	while (i < words)
	{
		res[i] = ft_get_next_word(&str, charset);
		i++;
	}
	res[i] = 0;
	return (res);
}

#include <stdio.h>

int main(void)
{
	char *str1 = "a/noj--sbai--sdi";
	char *charset = "-=/";
	char **sp;
	int i = 0;

	sp = ft_split(str1, charset);
	while (i < 5)
	{
		printf("%s\n", sp[i]);
		i++;
	}
	return (0);
}