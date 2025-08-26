#include <stdio.h>

int	ft_atoi(char *str);

void test(char *str)
{
	int i;

	printf("str = %s\n", str);
	i = ft_atoi(str);
	printf("int = %d\n\n", i);
}

int main(void)
{
	test("---+--+1234ab567");
	test("-1542911993");
	test("---2147483648");
	test("----21474836");
		test("----2147483647");
	test("       \t\v\n\r\f----2147483648");
	test("2147483648");
	test("0");
	test("   \t\v\f0");
}