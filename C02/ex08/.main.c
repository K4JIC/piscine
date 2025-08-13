#include <stdio.h>

char	*ft_strlowcase(char *str);

int main(void)
{
	char str1[] = "HEsitaTe";
	char str2[] = "hElsinki";
	char *str1after;
	char *str2after;

	str1after = ft_strlowcase(str1);
	printf("%s : %s\n", str1, str1after);
	str2after = ft_strlowcase(str2);
	printf("%s : %s\n", str2, str2after);
	return (0);
}
