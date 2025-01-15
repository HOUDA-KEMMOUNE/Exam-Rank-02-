#include "lib.h"

size_t	ft_strspn(const char *s, const char *accept)
{
	int	i;
	int	j;
	size_t	count;

	i = 0;
	j = 0;
	count = 0;
	while (s[i] && accept[j])
	{
		if (s[i] == accept[j])
		{
			i++;
			j++;
			count++;
		}
		else
			return (0);
	}
	return (count);
}
