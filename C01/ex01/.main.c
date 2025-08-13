#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int main(void){
	int a = 211212;
	int *b = &a;
	int **c = &b;
	int ***d = &c;
	int ****e = &d;
	int *****f = &e;
	int ******g = &f;
	int *******h = &g;
	int ********i = &h;
	int *********j = &i;

	printf("a = %d\n",a);
	ft_ultimate_ft(j);
	printf("a = %d\n",a);
}