/**
 * @brief string_concate 文字列を結合する関数
 *  
 * 文字列destのあとに文字列srcを連結する。
 * destの記憶領域の大きさは、strlen(dest)+strlen(src)+1以上必要となる。
 * dest文字列の終端'\0'は、src文字列の最初の文字で上書きされる。
 * 
 */

 #include <stdio.h>
 #include <string.h>

 char	*ft_strcat(char *dest, char *src);

 int main(void)
 {
	char str1[4] = "abc";
	char str2[4] = "XYZ";

	strcat(str1, str2);
	printf("strcat : %s\n", str1);

	char str3[4] = "abc";
	char str4[4] = "XYZ";

	ft_strcat(str3, str4);
	printf("ft_strcat : %s\n", str3);

	return (0);
 }