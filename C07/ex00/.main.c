#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *str);

void compare(char *str, int i)
{
	char *str1;
	char *str2;

	str1 = ft_strdup(str);
	str2 = strdup(str);

	printf("\ncase %d\n", i);
	printf("ft_strdup : %s\n", str1);
	printf("strdup : %s\n", str2);

	free(str1);
	free(str2);
}


int	main(void)
{
	compare("asdsdsdsddfdf", 1);
	compare("", 2);
	compare("iser\n\v", 3);
}