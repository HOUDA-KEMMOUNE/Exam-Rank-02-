#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	is_prime(int nbr)
{
    int check;
    if (nbr <= 1)
    {
        write(1, "0\n", 2);
        return (-1);
    }
        // exit(0);
    check = 2;
    while (check < nbr)
    {
        if (nbr % check == 0)
            return (1); //not prime
        check++;
    }
    return (0);
}

int ft_mini_atoi(char *s)
{
    int r;
    int i;

    i = 0;
    r = 0;
    while (s[i])
    {
        r = r * 10 + (s[i] - '0');
        i++;
    }
    return (r);
}

void    ft_mini_putnbr(int nbr)
{
    int n;

    n = 0;
    if (nbr >= 10)
    {
        ft_mini_putnbr(nbr / 10);
        n = (nbr % 10) + '0';
        write(1, &n, 1);
    }
    else
    {
        n = nbr + '0';
        write(1, &n, 1);
    }
}

int main(int ac, char **av)
{
    int nbr;
    int sum;

    if (ac == 2)
    {
        nbr = ft_mini_atoi(av[1]);
        sum = 0;
        if (is_prime(nbr) == -1)
            return (0);
        while (nbr > 1)
        {
            if (is_prime(nbr) == 0)
            {
                sum += nbr;
            }
            nbr--;
        }
        ft_mini_putnbr(sum);
    }
    else
        write(1, "0", 1);
    write(1, "\n", 1);
}