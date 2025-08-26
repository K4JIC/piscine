#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == 0)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

int	is_separator(char c, char *charset)
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

int	ft_count_words(char *str, char *charset)
{
	int	count;
	int	flag;
	int	i;

	count = 0;
	i = 0;
	flag = 1;
	while (str[i])
	{
		if (flag == 1)
		{
			if (!(is_separator(str[i], charset)))
				count++;
		}
		flag = 0;
		if (is_separator(str[i], charset))
			flag = 1;
		i++;
	}
	return (count);
}

// char	**ft_split(char *str, char *charset)
// {

// }

#include <stdio.h>

int main(void)
{
	char *str;
	char *charset;
	int i;
	char *find;

	str = "as--djn--jos--j";
	charset = "--";
	find = ft_strstr(str, charset);
	printf("%s\n", find);
	i = ft_count_words(str, charset);
	printf("%d\n", i);
}