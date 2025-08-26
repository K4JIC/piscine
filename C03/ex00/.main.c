#include <stdio.h>
#include <string.h>

/**
 * @brief string compare 文字列が同一かを比べる関数
 * 
 * s1とs2の文字列を先頭から順に比較し、初めて一致しなかった文字の文字コードの差を返す。
 * 
 * @param s1 文字列１
 * @param s2 文字列２
 * @return s1とs2の文字コードの差
 */

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char str1[10] = {128, '\0'};
	char str2[10] = "ieyasu";

	printf("case1 :\nstr1 = %s\nstr2 = %s\n", str1, str2);
	printf("ft_strcmp : %d\n", ft_strcmp(str1, str2));
	printf("strcmp : %d\n", strcmp(str1, str2));


	char str3[10] = "abazzz";
	char str4[10] = "aba";
	printf("case2 :\nstr1 = %s\nstr2 = %s\n", str3, str4);
	printf("ft_strcmp : %d\n", ft_strcmp(str3, str4));
	printf("strcmp : %d\n", strcmp(str3, str4));
	return (0);
}