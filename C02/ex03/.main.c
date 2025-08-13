#include <stdio.h>

int	ft_str_is_numeric(char *str);

int main(void)
{
	char *str1 = "1234";
	char *str2 = "h663";
	int	judge;

	judge = ft_str_is_numeric(str1);
	printf("%s : %d\n", str1, judge);
	judge = ft_str_is_numeric(str2);
	printf("%s : %d\n", str2, judge);
	return (0);
}