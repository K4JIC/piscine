#include <stdio.h>

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);


int main(void)
{
	char dest[100];
	char *src = "hello hello hello!!!";

	ft_strncpy(dest, src, 4);
	printf("src = %s\n", src);
	printf("dest = %s\n", dest);
	return (0);
}
