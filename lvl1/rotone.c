#include <unistd.h>

int	main(int ac, char *av[])
{
	if (ac == 2)
	{
		int	i;
		char	new_char;

		i = 0;
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				new_char = ((av[1][i] - 'a' + 1) % 26) + 'a';
				write(1, &new_char, 1);
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				new_char = ((av[1][i] - 'A' + 1) % 26) + 'A';
				write(1, &new_char, 1);
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
