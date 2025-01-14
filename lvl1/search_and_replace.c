#include <unistd.h>

size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	main(int ac, char *av[])
{
	size_t	len2;
	size_t	len3;

	len2 = ft_strlen(av[2]);
	len3 = ft_strlen(av[3]);
	if ((ac == 4) && (len2 == 1 && len3 == 1))
	{
		int	i;
		char	new_char;
		char	c2;
		char	c3;

		i = 0;
		c2 = av[2][0];
		c3 = av[3][0];
		while (av[1][i] != '\0')
 		{
			new_char = av[1][i];
			if (new_char == c2)
			{
				write(1, &c3, 1);
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
