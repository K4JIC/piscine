#include <stdio.h>

int	ft_print_combn(int n);

int	main(void)
{
	int a;

	a = 1;
	while (a < 10)
	{
		printf("n = %d のとき\n", a);
		ft_print_combn(a);
		a++;
	}
	return (0);
}
