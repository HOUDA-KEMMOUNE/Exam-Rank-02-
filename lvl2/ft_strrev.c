#include "lib.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char    *ft_strrev(char *str)
{
	int	len = ft_strlen(str);
	//char	s[len];
	int	start;
	char	tmp;

	start = 0;
	len--;
	//ft_strcpy(s, str);
	while (len > start)
	{
		tmp = str[start];
		str[start] = str[len];
		str[len] = tmp;
		start++;
		len--;
	}
	//printf("%s\n", s);
	return (str);
}
