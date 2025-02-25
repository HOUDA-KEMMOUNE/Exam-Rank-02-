#include <stdio.h>

unsigned    lcm(unsigned int a, unsigned int b)
{
	int i;
	int j;
	int r1[100];
	int r2[100];

	i = 1;
	j = 1;
	while (i <= 100)
	{
		r1[i] = i * a;
		i++;
	}
	while (j <= 100)
	{
		r2[j] = j * b;
		j++;
	}
	i = 1;
	j = 1;
	while (i <= 100)
	{
		while (j <= 100)
		{
			if (r1[i] == r2[j])
			{
				return (r1[i]);
			}
			j++;
		}
		j = 1;
		i++; 
	}
	return (0);
}