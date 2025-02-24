#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        char    *s1 = av[1];
        char    *s2 = av[2];
        int     len = ft_strlen(av[1]);
        int     i = 0;
        int     j = 0;
        int     count = 0;

        while (s1[i])
        {
            while (s2[j])
            {
                if (s1[i] != s2[j])
                    j++;
                else
                {
                    count++;
                    break ;
                }
            }
            i++;
        }
        if (count == len)
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
    write(1, "\n", 1);
}