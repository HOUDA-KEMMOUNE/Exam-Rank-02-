#include "lib.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	main(int ac, char *av[])
{
	if (ac == 2)
	{
		int	end;
		int	i;

		end = ft_strlen(av[1]);
		end--;
		i = 0;
		while (end >= 0)
		{
			if (av[1][end--] == ' ')
				end--;
			while (av[1][end] != ' ')
				end--;
			if (av[1][end] == ' ')
			{
				end++;
				i = end;
				while (av[1][i] != '\0')
				{
					if (av[1][i] != ' ')
					{
						write(1, &av[1][i], 1);
					}
					else
						break ;
					i++;
				}
				break ;
			}
		}
	}
	write(1, "\n", 1);
}
