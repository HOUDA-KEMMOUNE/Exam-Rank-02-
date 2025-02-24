#include <unistd.h>
#include <stdio.h>

// int main(int ac, char *av[])
// {
//     if (ac > 1)
//     {
//         int i;
//         int j;
//         int last;

//         i = 1;
//         j = 0;
//         last = 0;
//         while (i < ac)
//         {
//             while (av[i][j])
//             {
//                 if ((av[i][j] >= 'a' && av[i][j] <= 'a') || (av[i][j] >= 'A' && av[i][j] <= 'Z'))
//                 {
//                     while (av[i][j] != ' ' && av[i][j] != '\t' && av[i][j] != '\0')
//                     {
//                         if (av[i][j] >= 'a' && av[i][j] <= 'z')
//                             write(1, &av[i][j], 1);
//                         else if (av[i][j] >= 'A' && av[i][j] <= 'Z')
//                         {
//                             av[1][j] = av[i][j] + 32;
//                             write(1, &av[i][j], 1);
//                         }
//                         else
//                             write(1, &av[i][j], 1);
//                         j++;
//                     }
//                     if (av[i][j] == '\0')
//                         break ;
//                     last = j - 1;
//                     // printf("last ---> %c\n", av[1][last]);
//                     av[1][last] = av[i][last] - 32;
//                     // printf("last_char ---> %c\n", av[1][last]);
//                     write(1, &av[i][last], 1);
//                     if (av[i][j - 1] >= 'a' && av[i][j - 1] <= 'a')
//                     {
//                         last = j - 1;
//                         av[1][last] = av[i][j] - 32;
//                         write(1, &av[i][last], 1);
//                     }
//                     j++;
//                 }
//                 else
//                     write(1, &av[i][j], 1);
//                 j++;                
//             }
//             j = 0;
//             i++;
//         }
//     }
//     write(1, "\n", 1);
// }

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
        // write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
}