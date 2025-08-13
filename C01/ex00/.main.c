#include <stdio.h>

void	ft_ft(int *nbr);

int main(void){
	int a = 2;
	printf("a = %d\n", a);
	ft_ft(&a);
	printf("a = %d\n", a);
	return (0);
}