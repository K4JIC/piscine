#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

void test(int min, int max)
{
	int *r_array;
	int len;
	int i;

	printf("\nfrom %d, to %d\n", min, max);
	len = ft_ultimate_range(&r_array, min, max);
	for (i = 0; i < max - min; i++)
		printf("%d ", r_array[i]);
	printf("\nlen = %d\n", len);
	if (len > 0) // len <= 0 の場合はmallocされない
		free(r_array);
}

int main(void)
{
	test(0,10);
	test(-4,8);
	test(4,2);
	test(5,5);
	return (0);
}
