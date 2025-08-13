#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main(void){
	int a = 67, b = 12;
	printf("a = %d, b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	return 0;
}