#include <unistd.h>

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	char c = (n % 10) + '0';
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	(void)argv;//for gcc
	ft_putnbr(argc - 1);
	write(1, "\n", 1);
	return (0);
}
