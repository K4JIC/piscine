#include "ft_string.h"
#include <unistd.h>

typedef struct
{
	char	*key;
	char	*value;
}fig_word;

static void	putdict_val(char *key, fig_word *dict, unsigned int digit)
{
	int	size;
	int	i;

	size = 41;
	i = 0;
	while (i < size)
	{
		if (ft_strncmp(dict[i].key, key, digit) == 0)
		{
			putstr(dict[i].value);
			return ;
		}
		i++;
	}
}

void	putnbr_ult(char *nbr, int digit, fig_word *dict)
{
	int	i;

	i = 0;
	putdict_val(&nbr[i], dict, 1);
	write(1, " ", 1);
	putdict_val("100", dict, 3);
	write(1, " ", 1);
	i++;
	if (nbr[i] == '1')
	{
		putdict_val(&nbr[i], dict, 2);
		write(1, " ", 1);
	}
	else
	{
		putdict_val(&nbr[i], dict, 1);
		write(1, " ", 1);
		putdict_val("10", dict, 2);
		write(1, " ", 1);
	}
	i++;
	putdict_val(&nbr[i], dict, 1);
	write(1, " ", 1);
	// putstr(digit);
}