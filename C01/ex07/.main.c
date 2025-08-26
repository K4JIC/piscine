#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main(void){
	int	a[] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	int size = 10;

	ft_rev_int_tab(a, size);
	while (i < size) 
	{
        printf("a[%d] = %d\n", i, a[i]);
		i++;
	}
	return 0;
}