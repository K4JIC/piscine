/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_dict.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 13:17:32 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/24 12:53:46 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include "ft_string.h"

typedef struct
{
	char	*key;
	char	*value;
}fig_word;

int	is_pattern(char c, char *pattern)
{
	int	i;

	i = 0;
	while (pattern[i])
	{
		if (c == pattern[i])
			return (1);
		i++;
	}
	return (0);
}

char	*skip_pattern(char *str, char *pattern)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_pattern(str[i], pattern))
			return (&str[i]);
		i++;
	}
	return (&str[i]);
}

int	is_num(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

char	*atoi_rule(char *nbr)
{
	char	*start;
	char	*end;
	char	*atoinbr;

	nbr = skip_pattern(nbr, " \f\n\r\t\v");
	nbr = skip_pattern(nbr, "0");
	start = nbr;
	while (is_num(*nbr))
		nbr++;
	end = nbr;
	atoinbr = ft_strndup(start, end - start);
	return (atoinbr);
}

int	set_dict_one(char *line, fig_word *np)
{
	char		*start;
	char		*end;

	(*np).key = NULL;
	(*np).value = NULL;
	if (line == NULL) return (0);
	start = line;
	while (*line && *line != ':')
		line++;
	end = line;
	(*np).key = ft_strndup(start, end - start); // あとで解放
	line = skip_pattern(line, " ");
	if (is_pattern(*line, ":"))
		line++;
	line = skip_pattern(line, " ");
	start = line;
	while (*line && *line != '\n' && *line != '\r')
		line++;
	end = line;
	(*np).value = ft_strndup(start, end - start); // あとで解放
	return (0);
}


void free_dict(fig_word *dict, int size)
{
	for (int i = 0; i < size; i++) {
		free(dict[i].key);
		free(dict[i].value);
	}
	free(dict); // dict 自体も malloc してたなら
}

// #include <stdio.h>

// int main(void)
// {
//     const char *lines[] = {
//         "   apple  :  red",
//         "banana: yellow",
//         "   grape : purple"
//     };
//     int n = sizeof(lines) / sizeof(lines[0]);

//     // fig_word の配列を malloc
//     fig_word *dict = malloc(sizeof(fig_word) * n);

//     for (int i = 0; i < n; i++) {
//         dict[i] = set_dict_one((char *)lines[i]);
//     }

//     // 確認
//     for (int i = 0; i < n; i++) {
//         printf("%s => %s\n", dict[i].key, dict[i].value);
//     }

//     // 全解放
//     free_dict(dict, n);
//     return 0;
// }

