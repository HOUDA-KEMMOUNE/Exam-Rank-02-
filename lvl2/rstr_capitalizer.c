#include <unistd.h>
#include <stdio.h>

int main(int ac, char *av[])
{
    if (ac > 1)
    {
        int     i;
        int     j;
        char    c;

        i = 1;
        j = 0;
        while (i < ac)
        {
            while (av[i][j])
            {
                if ((av[i][j + 1] == ' ' || av[i][j + 1] == '\t' || av[i][j + 1] == '\0'))
                {
                    if (av[i][j] >= 'a' && av[i][j] <= 'z')
                    {
                        c = av[i][j] - 32;
                        write(1, &c, 1);
                    }
                    else
                        write(1, &av[i][j], 1);
                }
                else if ((av[i][j] != ' ' || av[i][j] != '\t'))
                {
                    if (av[i][j] >= 'A' && av[i][j] <= 'Z')
                    {
                        c = av[i][j] + 32;
                        write(1, &c, 1);
                    }
                    else
                        write(1, &av[i][j], 1);
                }
                j++;
            }
            write(1, "\n", 1);
            j = 0;
            i++;
        }
    }
    else
        write(1, "\n", 1);
}