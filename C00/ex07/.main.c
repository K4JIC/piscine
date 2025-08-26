#include <stdio.h>

void	ft_putnbr(int nb);

void test(int num)
{
	printf("%d\n", num);
	ft_putnbr(num);
	printf("\n");
}

int	main(void)
{
	test(12);
	test(-22);
	test(0);
	test(-2147483648);
	test(-2147483647);
	test(2147483647);
	return 0;
}
