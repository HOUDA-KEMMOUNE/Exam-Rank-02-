#include "lib.h"

int	main(int ac, char *av[])
{
	int	r;

	if (ac == 4)
	{
		if (av[2][0] == '+')
		{
			r = ft_atoi(av[1]) + ft_atoi(av[3]);
			printf("%d\n", r);
		}
		else if (av[2][0] == '-')
		{
			r = ft_atoi(av[1]) - ft_atoi(av[3]);
			printf("%d\n", r);
		}
		else if (av[2][0] == '*')
		{
			r = ft_atoi(av[1]) * ft_atoi(av[3]);
			printf("%d\n", r);
		}
		else if (av[2][0] == '/')
		{
			r = ft_atoi(av[1]) / ft_atoi(av[3]);
			printf("%d\n", r);
		}
	}
	else
		write(1, "\n", 1);
}
