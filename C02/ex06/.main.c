#include <stdio.h>

int	ft_str_is_printable(char *str);

int main(void)
{
	char *str1 = "HELLO";
	char *str2 = "HEL\nL0";
	int	judge;

	judge = ft_str_is_printable(str1);
	printf("%s : %d\n", str1, judge);
	judge = ft_str_is_printable(str2);
	printf("%s : %d\n", str2, judge);
	return (0);
}