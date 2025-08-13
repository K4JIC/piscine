#include <stdio.h>

int	ft_strlen(char *str);

int main(void)
{
	int num;
	char *str = "hello world!";
	
	num = ft_strlen(str);
	printf("num = %d\n", num);
	return 0;
}