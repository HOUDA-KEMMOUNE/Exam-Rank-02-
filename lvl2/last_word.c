#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int     i;
        int     end;
        char    *last_word;

        i = 0;
        while (av[1][i])
            i++;
        end = i - 1;
        while (av[1][end])
        {
            if (av[1][end] > 32 && av[1][end - 1] <= 32)
            {
                last_word = &av[1][end];
                break ;
            }
            end--;
        }
        i = 0;
        while (last_word && last_word[i] > 32)
        {
            if (last_word[i] <= 32)
                break ;
            write(1, &last_word[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}