#include <unistd.h>

char	*rev_print(char *str)
{
	int	end;
	
	end = 0;
	while (str[end] != '\0')
		end++;
	end --;
	while (end >= 0)
	{
		write(1, &str[end], 1);
		end--;
	}
	write(1, "\n", 1);
	return (str);
}
