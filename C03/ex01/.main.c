#include <stdio.h>
#include <string.h>

/**
 * @brief string n compare 文字列の先頭n文字が同一かを比べる関数
 * 
 * s1とs2の文字列を先頭から順にn文字比較し、初めて一致しなかった文字の文字コードの差を返す。
 * 
 * @param s1 文字列１
 * @param s2 文字列２
 * @param s2 比べる文字数
 * @return s1とs2の文字コードの差
 */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char str1[10] = "tokugawake";
	char str2[10] = "ieyasu";
	int m = 0;

	printf("case1 :\nstr1 = %s\nstr2 = %s\nn = %d\n", str1, str2, m);
	printf("ft_strncmp : %d\n", ft_strncmp(str1, str2, m));
	printf("strncmp : %d\n", strncmp(str1, str2, m));


	char str3[10] = "abazzz";
	char str4[10] = "aba";
	int n = 3;
	printf("case2 :\nstr1 = %s\nstr2 = %s\nn = %d\n", str3, str4, n);
	printf("ft_strncmp : %d\n", ft_strncmp(str3, str4, n));
	printf("strncmp : %d\n", strncmp(str3, str4, n));
	return (0);
}