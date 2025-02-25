#include <stdio.h>
#include <stdlib.h>

void	ft_div(int a)
{
	int	div;
	int	tmp;
	int	i;

	div = 2;
	tmp = a;
	i = 0;
	while (tmp >= 1 && div <= tmp)
	{
		if (tmp % div == 0)
		{
			// i = 1;
			if (i != 0)
				printf("*");
			tmp = tmp / div;
			i++;
			printf("%d", div);
		}
		else
			div++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int	a;

		a = atoi(av[1]);
		if (a > 1)
			ft_div(a);
		else if (a == 0 || a == 1)
		{
			printf("%d\n", a);
			return (0);
		}
		else
		{
			printf("\n");
			return (0);
		}
	}
	printf("\n");
}