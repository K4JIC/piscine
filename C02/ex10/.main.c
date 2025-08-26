#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

void test(char *dest, char *src, unsigned int size)
{
	unsigned int pos1;
	unsigned int pos2;
	char destcpy[10];

	strcpy(destcpy, dest);
	pos1 = ft_strlcpy(dest,src,size);
	pos2 = strlcpy(destcpy,src,size);
	printf("nsrc = %s\nsize = %d\n", src, size);
	printf("ft_strlcpy : dest = %s, len = %d\n", dest, pos1);
	printf("strlcpy : dest = %s, len = %d\n", destcpy, pos2);
}

int main(void){
	char str[256] = "namamugi namagome";
	char dest[10];
	int len = 12;

	test(dest, str, len);
	return (0);
}

