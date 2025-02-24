#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i;
        int end;
        int start;

        i = 0;
        while (av[1][i])
        {
            i++;
        }
        end = i - 1;
        while (av[1][end] <= 32)
            end--;
        while (av[1][end] > 32)
            end--;
        if (av[1][end] <= 32)
        {
            start = end + 1;
            while (av[1][start])
            {
                if (av[1][start] <= 32)
                    break ;
                write(1, &av[1][start], 1);
                start++;
            }
        }
    }
    write(1, "\n", 1);
}