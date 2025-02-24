#include <unistd.h>

void    ft_putnbr(int nbr)
{
    char    n;

    if (nbr >= 10)
    {
        ft_putnbr(nbr / 10);
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
    (void)av;
    if (ac == 1)
        write(1, "0", 1);
    else if (ac > 1)
    {
        ac--;
        ft_putnbr(ac);
    }
    write(1, "\n", 1);
}