#include <stdio.h>

int	ft_strlen(char *str);

int main(void)
{
	char str[100] = "Hello world";
	printf("%s, %d文字", str, ft_strlen(str));
}