/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 11:21:19 by shshimiz          #+#    #+#             */
/*   Updated: 2025/08/24 12:41:32 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include"printnumber.h"

// typedef struct
// {
// 	char	*key;
// 	char	*value;
// }fig_word;

int	set_dict_one(char *line, fig_word *np);

char	*setnline(char *buf, int n) 
{ 
	int i;
	int count;

	i = 0;
	count = 0;
	if (n == 0)
		return (&buf[i]);
	while (buf[i]) 
	{
		if (buf[i] == '\n')
			count++;
		if (count == n)
			return (&buf[i + 1]);
		i++;
	}
	return (0);
}

// fig_word *filldict(fig_word *dict, char *buf)
// {
	
// }

int main(int argc, char *argv[])
{
	(void)argc;
	int fd;
	char buf[99999];
	ssize_t bite;
	
	fd = open(argv[1], O_RDONLY);
	printf("%d\n", fd);

	bite = read(fd, buf, sizeof(buf) - 1);
	if (bite > 0)
    	buf[bite] = '\0';

	printf("%s", buf);

	fig_word dict[41];
	int i = 0;
	int	derror = 0;
	for (i = 0; i < 41; i++)
	{
		derror = set_dict_one(setnline(buf, i), &dict[i]);
		if (derror == -1)
		{
			write(1, "DictError\n", 10);
			return (-1);
		}
	}
	i = 0;
	for (i = 0; i < 41; i++)
	{
		printf("key:%s -> value:%s\n", dict[i].key, dict[i].value);
	}
	putword("127246724", 0, dict);
	return (0);
}


