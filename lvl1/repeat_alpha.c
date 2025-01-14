#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;
	int j;
	int	count;

	i = 0;
	j = 0;
	if (ac == 2)
	{
		while (av[1][j] != '\0')
		{
			if ((av[1][j] >= 'a' && av[1][j] <= 'z'))
			{
				count = av[1][j] - 'a';
				while (i <= count)
				{
					write(1, &av[1][j], 1);
					i++;
				}
				count = 0;
				i = 0;
			}
			else if (av[1][j] >= 'A' && av[1][j] <= 'Z')
			{
				count = av[1][j] - 'A';
				while (i <= count)
				{
					write(1, &av[1][j], 1);
					i++;
				}
				count = 0;
				i = 0;
			}
			else
				write(1, &av[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
}
