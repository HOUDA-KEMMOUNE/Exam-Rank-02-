#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;
	char	c;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				c = 'z' - (av[1][i] - 'a');
				write(1, &c, 1);
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				c = 'Z' - (av[1][i] - 'A');
				write(1, &c, 1);
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
