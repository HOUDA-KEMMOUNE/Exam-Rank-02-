#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	count_words(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] && s[i++])
	{
		if ((s[i] == ' ' || s[i] == '\t') && (s[i++] != ' ' || s[i++] != '\t'))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char *s)
{
	char	**r;
	int		words;
	int		start;
	int		end;
	int		size;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	words = count_words(s);
	r = malloc((words + 1) * sizeof(char *));
	while (s[i])
	{
		while (s[i] == ' ' || s[i] == '\t')
			i++;
		start = i;
		while (s[i] != ' ' && s[i] != '\t' && s[i] != '\0')
			i++;
		end = i;
		size = end - start + 1;
		r[k] = malloc(size);
		while (j < size && k < words)
		{
			r[k][j] = s[start];
			j++;
			start++;
		}
		r[k][j] = '\0';
		j = 0;
		k++;
	}
	r[k] = '\0';
	return (r);
}