#include <stdio.h>

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
				c = av[1][i] - 32;
				write(1, &c, 1);
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				c = av[1][i] + 32;
				write(1, &c, 1);
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
