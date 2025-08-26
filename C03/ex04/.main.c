/**
 * 
 * 文字列str1の中から文字列str2が最初に現れる位置のポインタを返す関数。
 * 文字列str1の中に文字列str1がない場合はNULLを返す。
 * 文字列str2は文字列str1よりも長くても支障はない（NULLを返す）。
 * 
 */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

void test(char *str1, char *str2)
{
	printf("str1 : %s, str2 : %s\n", str1, str2);
	printf("strstr : %ld 文字目, ft_strstr : %ld 文字目\n", strstr(str1, str2) - &str1[0] + 1, ft_strstr(str1, str2) - &str1[0] + 1);
}

int main(void)
{
	char pos1[50] ="tokugawaieyasu";
	char pos2[50] ="nakatominokamatari";
	char la1[3] = "";
	char la2[3] = "ka";

	test(pos1, la1);
	test(pos2, la2);


	printf("%s",ft_strstr(pos1, la1));
	return (0);
}

