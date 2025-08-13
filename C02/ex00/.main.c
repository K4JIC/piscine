#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);


int main(void)
{
	char dest[100];
	char *src = "hello hello hello!!!";

	ft_strcpy(dest, src);
	printf("src = %s\n", src);
	printf("dest = %s\n", dest);
	return (0);
}
