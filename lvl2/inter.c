#include "lib.h"

int	check(char *s, char	c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char *av[])
{
	char	result[127];
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			while (av[2][j])
			{
				if (check(result, av[1][i]) == 0 && av[1][i] == av[2][j])
				{
					result[k] = av[1][i];
					write(1, &result[k], 1);
					k++;
					break ;
				}
				j++;
			}
			j = 0;
			i++;
		}
	}
	write(1, "\n", 1);
}
