char **words_add(char *str, int size)
{
	int count = 0;
	int flag = 1;
	int i = 0;
	char **addlist;

	addlist = (char**)malloc((size + 1) * sizeof(char**));
	while(str[i])
	{
		if (flag == 1)
		{
			if (is_printable(str[i]))
			{
				addlist[count] = &str[i];
				count++;
			}
		}
		flag = 0;
		if (is_sepalator(str[i]))
			flag = 1;
		i++;
	}
	addlist[count] = 0;
	return (addlist);
}

int main(void)
{
	char *str;
	char **addlist;
	int count;
	int i;

	str = "i am happy";
	count = count_words(str);
	addlist = words_add(str, count);
	while(addlist[i])
		printf("%s\n", addlist[i]);
	return 0;
}