#include <stdio.h>
#include <string.h>


int main(void){
	char str[] = "namamugi namagome";
	char dest[10];
	int len;

	len = strlcpy(*str);
	printf("本家strlen : return = %d, dist = %s");

}
