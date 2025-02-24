#include <stdio.h>

int	ft_atoi_base(const char *str, int base)
{
	int	i;
	int	result;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	result = 0;
	num = 0;
	if (base == 2 || base == 8 || base == 10 || base == 16)
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			i++;
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
			{
				sign = -1;
			}
			i++;
		}
		while (str[i])
		{
			if (str[i] >= '0' && str[i] <= '9')
				num = str[i] - '0';
			else if (str[i] >= 'a' && str[i] <= 'f')
				num = str[i] - 'a' + 10;
			else if (str[i] >= 'A' && str[i] <= 'F')
				num = str[i] - 'A' + 10;
			else
				break ;
			if (num >= base)
				break ;
			result = (result * base) + num;
			i++;
		}
		return (result * sign);
	}
	else
		return (0);
}

int	main()
{
	printf("%d\n", ft_atoi_base("123a45f", 16));
}