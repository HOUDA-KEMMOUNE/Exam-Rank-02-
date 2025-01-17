#include "lib.h"

int		max(int* tab, unsigned int len)
{
	if (!tab)
		return (0);
	unsigned int	i;
	int	maxi;

	i = 0;
	maxi = *tab;
	while (i < len)
	{
		if (tab[i] > maxi)
			maxi = tab[i];
		i++;
	}
	return (maxi);
}
