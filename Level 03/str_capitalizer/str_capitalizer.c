#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	int j;

	i = 1;
	j = 0;
	if (ac >= 2)
	{
		while (i < ac)
		{
			j = 0;
			while (av[i][j] != '\0')
			{
				if (av[i][j] >= 'a' && av[i][j] <= 'z' &&
						(av[i][j - 1] == ' ' || av[i][j - 1] == '\t' || av[i][j - 1] == '\0'))
					 av[i][j] -= 32;
				else if (av[i][j] >= 'A' && av[i][j] <= 'Z' &&
                        (av[i][j - 1] == ' ' || av[i][j - 1] == '\t'))
                     av[i][j] = av[i][j];
				else if (av[i][j] >= 'A' && av[i][j] <= 'Z' &&
						(av[i][j - 1] != ' ' || av[i][j - 1] != '\t'))
					av[i][j] += 32;
				write(1, &av[i][j], 1);
				j++;
			}
			i++;
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}