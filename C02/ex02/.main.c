#include <stdio.h>

int	ft_str_is_alpha(char *str);

int main(void)
{
	char *str1 = "hel3lo";
	char *str2 = "hello";
	int	judge;

	judge = ft_str_is_alpha(str1);
	printf("%s : %d\n", str1, judge);
	judge = ft_str_is_alpha(str2);
	printf("%s : %d\n", str2, judge);
	return (0);
}