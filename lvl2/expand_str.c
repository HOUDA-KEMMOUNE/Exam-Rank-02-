#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i;

        i = 0;
        while (av[1][i])
        {
            while (av[1][i] == ' ' || av[1][i] == '\t')
                i++;
            if (av[1][i] == '\0')
                break ;
            while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != '\0')
            {
                write(1, &av[1][i], 1);
                i++;
            }
            while (av[1][i] == ' ' || av[1][i] == '\t')
                i++;
            if (av[1][i] == '\0')
                break ;
            write(1, "   ", 3);
        }
    }
    write(1, "\n", 1);
}