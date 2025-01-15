#include "lib.h"

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;
	char	*r;

	i = 0;
	j = 0;
	r = (char *)s1;
	while (r[i])
	{
		while (r[i] != s2[j] && s2[j])
		{
			j++;
		}
		if (s2[j] != '\0')
			return (r);
		j = 0;
		r++;
	}
	if (r[i] == '\0')
		return (NULL);
	return (r);
}
