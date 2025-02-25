#include <stdio.h>
#include <stdlib.h>

char    *ft_itoa(int nbr)
{
    int new_n;
    int count;
    char    *str;
    char    *s;
    char    c;
    int     i;
    int     nbr_n = nbr;

    count = 0;
    new_n = nbr;
    i = 0;
    if (nbr < 0)
    {
        new_n = nbr * -1;
        count ++;
    }
    while (new_n >= 10)
    {
        new_n = new_n / 10;
        count++;
    }
    count++;
    str = malloc(count + 1);
    s = malloc(count + 1);
    while (i < count)
    {
        if (nbr < 0)
        {
            str[i] = '-';
            nbr = nbr * -1;
            i++;
        }
        if (nbr >= 10)
        {
            c = (nbr % 10) + '0';
            nbr = nbr / 10;
            str[i] = c;
        }
        else
        {
            c = nbr + '0';
            str[i] = c;
        }
        i++;
    }
    str[i] = '\0';
    i = 0;
    while (str[i])
        i++;
    int end = i - 1;
    i = 0;
    if (nbr_n < 0)
    {
        s[i] = '-';
        i++;
    }
    printf("i --> %d\n", i);
    while (end >= 0 && str[end] != '-')
    {
        s[i] = str[end];
        i++;
        end--;
    }
    s[i] = '\0';
    return (s);
}

int main()
{
    char *s = ft_itoa(123456);
    printf("%s\n", s);
}