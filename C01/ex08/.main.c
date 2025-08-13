#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int size = 7;
	int a[] = {1,200,34,-5,23901,-20202,0};
	ft_sort_int_tab(a, size);

	int i = 0;
	while (i < size) 
	{
        printf("a[%d] = %d\n", i, a[i]);
		i++;
	}
	return 0;
}