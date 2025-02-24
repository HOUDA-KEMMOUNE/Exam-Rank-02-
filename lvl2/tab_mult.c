#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *s)
{
    int i;
    int r;

    i = 0;
    r = 0;
    while (s[i])
    {
        r = r * 10 + (s[i] - '0');
        i++;
    }
    return (r);
}

void    ft_putnbr(int nbr)
{
    char    c;

    if (nbr >= 10)
    {
        ft_putnbr(nbr / 10);
        c = (nbr % 10) + '0';
        write(1, &c, 1);
    }
    else
    {
        c = nbr + '0';
        write(1, &c, 1);
    }
}

void    ft_putstr(char *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
    // write(1, "\n", 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int nbr;
        int i = 1;

        nbr = ft_atoi(av[1]);
        if (nbr >= 0)
        {
            while (i < 10)
            {
                ft_putnbr(i);
                ft_putstr(" x ");
                ft_putnbr(nbr);
                ft_putstr(" = ");
                ft_putnbr(i * nbr);
                ft_putstr("\n");
                i++;
            }
        }
        else
          write(1, "\n", 1);  
    }
    else
        write(1, "\n", 1);
}