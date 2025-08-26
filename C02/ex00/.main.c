#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int main(void)
{
	char dest1[2];
	char dest2[2];
	char *ret1;
	char *ret2;
	char *src = "asds";

	ret1 = ft_strcpy(dest1, src);
	ret2 = strcpy(dest2,src);
	printf("src = %s\n", src);
	printf("ft_strcpy : %s\n", dest1);
	printf("strcpy : %s\n", dest2);
	printf("ft_strcpy_ret : %p\n", ret1);
	printf("strcpy_ret : %p\n", ret2);
	return (0);
}
