void	ft_putnbr_base(int nbr, char *base);

int main(int argc, char **argv)
{
	int i;

	i = atoi(argv[1]);
	ft_putnbr_base(i, argv[2]);
	return (0);
}