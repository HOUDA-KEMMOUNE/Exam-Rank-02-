#include <unistd.h>

size_t	strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

int	main(int ac, char *av[])
{
	int	i;
	int	j;
	size_t	len;

	i = 0;
	j = 0;
	if (ac <= 1)
		write(1, "\n", 1);
	else
	{
		len = strlen(av[1]);
		while (av[1][j] == ' ' && av[1][j] != '\0')
		{
			j++;
		}
		while (av[1][j] != ' ' && av[1][j] != '\0')
		{
			if (len == 1)
				break;
			write(1, &av[1][j], 1);
			j++;
		}
		write(1, "\n", 1);
	}
}
