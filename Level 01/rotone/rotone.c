#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;

	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'z' || argv[1][i] == 'Z')//z->a || Z-A
				argv[1][i] -= 25;
			else if (argv[1][i] >= 'a' && argv[1][i] < 'z')
				argv[1][i] += 1;//go 1 letter forward
			else if (argv[1][i] >= 'A' && argv[1][i] < 'Z')
				argv[1][i] += 1;
			// else if ((av[1][i] >= 'A' && av[1][i] < 'Z') || (av[1][i] >= 'a' && av[1][i] < 'z'))
			// 	av[1][i] += 1;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
