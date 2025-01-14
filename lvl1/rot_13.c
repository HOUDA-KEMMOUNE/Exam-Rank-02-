#include <unistd.h>
#include <stdio.h>

int	main(int ac, char *av[])
{
	int	j;
	char	new_char;
	char	c;

	j = 0;
	if (ac == 2)
	{
		while (av[1][j] != '\0')
		{
			if ((av[1][j] >= 'a' && av[1][j] <= 'z'))
			{
				c = av[1][j];
				new_char = ((c - 'a' + 13) % 26) + 'a';
				write(1, &new_char, 1);
			}
			else if (av[1][j] >= 'A' && av[1][j] <= 'Z')
			{
				c = av[1][j];
				new_char = ((c - 'A' + 13) % 26) + 'A';
				write(1, &new_char, 1);
			}
			else
				write(1, &av[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
}
