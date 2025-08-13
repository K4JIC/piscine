#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);
int	ft_intlen(int *str);

int main(void){
	int	a[] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	int size = ft_intlen(&a[0]);

	
	ft_rev_int_tab(a, size);
	while (i < size - 1) 
	{
        printf("a[%d] = %d\n", i, a[i]);
		i++;
	}
	return 0;
}