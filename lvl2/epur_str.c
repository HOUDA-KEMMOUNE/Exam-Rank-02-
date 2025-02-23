#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i;
        // int start;

        i = 0;
        while (av[1][i])
        {
            while (av[1][i] == ' ' || av[1][i] == '\t')
                i++;
            // start = i;
            while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != '\0')
            {
                write(1, &av[1][i], 1);
                i++;
            }
            if ((av[1][i++] != '\t' || av[1][i++] != ' ') && (av[1][i++] != '\0'))
                write(1, " ", 1);
            else
                break;
            // i++;
        }
    }
    write(1, "\n", 1);
}