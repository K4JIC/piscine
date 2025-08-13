#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main(void){
	int a = 45, b = 20;
	int div, mod;
	printf("a = %d, b = %d\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("div = %d, mod = %d\n", div, mod);
	return 0;
}