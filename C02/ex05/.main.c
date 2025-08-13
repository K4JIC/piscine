#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int main(void)
{
	char *str1 = "HELLO";
	char *str2 = "HELL0";
	int	judge;

	judge = ft_str_is_uppercase(str1);
	printf("%s : %d\n", str1, judge);
	judge = ft_str_is_uppercase(str2);
	printf("%s : %d\n", str2, judge);
	return (0);
}