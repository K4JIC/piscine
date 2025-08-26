#include <stdio.h>

char	*ft_strcapitalize(char *str);

int main(void)
{
	char str1[] = "i am ozaki 42tokYo-student";
	char str2[] = "==test 9090test \ntest";
	char *str1after;
	char *str2after;

	str1after = ft_strcapitalize(str1);
	printf("%s : %s\n", str1, str1after);
	str2after = ft_strcapitalize(str2);
	printf("%s : %s\n", str2, str2after);
	return (0);
}
