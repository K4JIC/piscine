#include <stdio.h>

int	ft_putnbr(int nb);

int main(void)
{
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(-2147483648);
	return (0);
}