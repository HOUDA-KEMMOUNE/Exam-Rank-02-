#include <unistd.h>

int ft_atoi(char *s)
{
    int r;
    int i;

    r = 0;
    i = 0;
    while (s[i])
    {
        r = r * 10 + (s[i] - '0');
        i++;
    }
    return (r);
}

void    ft_puthex(int nbr)
{
    char    n;

    if (nbr >= 10)
    {
        ft_puthex(nbr / 16);
        nbr = nbr % 16;
        if (nbr % 16 <= 15)
        {
            if (nbr >= 10 && nbr <= 15)
            {
                n = nbr - 10 + 'a';
                write(1, &n, 1);
            }
            else
            {
                n = nbr + '0';
                write(1, &n, 1);
            }
        }
    }
    else
    {
        n = nbr + '0';
        write(1, &n, 1);
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int nbr;

        nbr = ft_atoi(av[1]);
        if (nbr >= 1)
            ft_puthex(nbr);
    }
    write(1, "\n", 1);
    // if (nb > 0)

}