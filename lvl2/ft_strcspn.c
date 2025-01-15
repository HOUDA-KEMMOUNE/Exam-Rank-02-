#include "lib.h"

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;
	size_t	count;

	i = 0;
	j = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] != reject[j] && reject[j])
			j++;
		if (reject[j] != '\0')
				return (count);
		j = 0;
		i++;
		count++;
	}
	return (count);
}
