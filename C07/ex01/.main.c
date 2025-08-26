#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

void test(int min, int max)
{
	int *r_array;
	int i;

	printf("\n\nfrom %d, to %d\n", min, max);
	r_array = ft_range(min, max);
	for (i = 0; i < max - min; i++)
		printf("%d ", r_array[i]);
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