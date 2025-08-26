/**
 * @brief string_n_concate 文字列を追加でn文字結合する関数
 *  
 * 文字列destのあとに文字列srcをn文字連結する。
 * dest文字列の終端'\0'は、src文字列の最初の文字で上書きされる。
 * 
 */

 #include <stdio.h>
 #include <string.h>

 char	*ft_strncat(char *dest, char *src, unsigned int n);

 int main(void)
 {
	char str1[16] = "abc";
	char str2[4] = "XYZ";
	int n = 2;

	strncat(str1, str2, n);
	printf("strncat : %s\n", str1);

	char str3[16] = "abc";
	char str4[4] = "XYZ";
	int m = 2;

	ft_strncat(str3, str4, m);
	printf("ft_strncat : %s\n", str3);

	return (0);
 }