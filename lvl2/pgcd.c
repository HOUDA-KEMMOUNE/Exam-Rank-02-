#include <stdio.h>
#include <stdlib.h>

void	ft_div(int a, int b)
{
	int	div;
	int	gcd;

	div = 1;
	gcd = 0;
	while ((a >= div) && (b >= div))
	{
		if ((a % div == 0) && (b % div == 0))
			gcd = div;
		div++;
	}
	printf("%d", gcd);
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int a;
		int b;

		a = atoi(av[1]);
		b = atoi(av[2]);

		if (a >= 1 && b >= 1)
		{
			ft_div(a, b);
		}
		else
		{
			return (0);
			printf("\n");
		}
	}
	printf("\n");
}