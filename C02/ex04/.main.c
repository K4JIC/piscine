#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int main(void)
{
	char *str1 = "he11o";
	char *str2 = "hello";
	int	judge;

	judge = ft_str_is_lowercase(str1);
	printf("%s : %d\n", str1, judge);
	judge = ft_str_is_lowercase(str2);
	printf("%s : %d\n", str2, judge);
	return (0);
}