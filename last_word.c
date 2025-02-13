#include <stdio.h>
#include <unistd.h>

int check_space(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == ' ' || str[i] == '\t')
            return (0);
        i++;
    }
    return (1);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i;
        int end;
        int start;
        // int space;

        i = 0;
        if (check_space(av[1]) == 1)
        {
            while (av[1][i])
            {
                write(1, &av[1][i], 1);
                i++;
            }
            return (0);
        }
        while(av[1][i])
            i++;
        printf("i --> %d\n", i);
        end = i - 1;
        printf("end = i - 1 --> %d\n", end);
        while ((end >= 0))
        {
            // if ((av[1][end] == ' ' || av[1][end] == '\t'))
            //     end--;
            if ((av[1][end] != ' ' || av[1][end] != '\t') && (av[1][end--] == ' ' || av[1][end--] == '\t'))
                break ;
            end--;
        }
            // end--;
        printf("%d\n", end);
        start = end + 1;
        while (av[1][start])
        {
            write(1, &av[1][start], 1);
            start++;
        }
    }
    write(1, "\n", 1);
}