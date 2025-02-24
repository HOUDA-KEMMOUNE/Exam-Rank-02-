#include <unistd.h>
#include <stdio.h>

// int main(int ac, char **av)
// {
//     if (ac > 1)
//     {
//         int i;
//         int j;
//         char    c;

//         i = 1;
//         j = 0;
//         while (i < ac)
//         {
//             if ((av[i][0] >= 'a' && av[i][0] <= 'z'))
//             {
//                 c = av[i][j] - 32;
//                 write(1, &c, 1);
//                 j++;
//             }
//             else
//             {
//                 write(1, &av[i][j], 1);
//                 j++;
//             }
//             while (av[i][j])
//             {
//                 if ((av[i][j] == ' ' || av[i][j] == '\t'))
//                 {   
//                     write(1, &av[i][j], 1);
//                     // j++;
//                     while ((av[i][j - 1] == ' ' || av[i][j - 1] == '\t'))
//                     {
//                         if ((av[i][j] >= 'a' && av[i][j] <= 'z'))
//                         {
//                             c = av[i][j] - 32;
//                             write(1, &c, 1);
//                         }
//                         else
//                             write(1, &av[i][j], 1);
//                         j++;
//                     }
//                 }
//                 else if (av[i][j] >= 'A' && av[i][j] <= 'Z')
//                 {
//                     c = av[i][j] + 32;
//                     write(1, &c, 1);
//                 }
//                 else
//                     write(1, &av[i][j], 1);
//                 j++;
//             }
//             j = 0;
//             write(1, "\n", 1);
//             i++;
//         }
//     }
//     else
//         write(1, "\n", 1);
// }

int main(int ac, char **av)
{
    if (ac > 1)
    {
        int i;
        int j;
        char    c;

        i = 1;
        j = 0;
        while (i < ac)
        {
            while (av[i][j])
            {
                if (i == 0 || av[i][j - 1] == ' ' || av[i][j - 1] == '\t')
                {
                    if (av[i][j] >= 'a' && av[i][j] <= 'z')
                        c = av[i][j] - 32;
                    else
                        c = av[i][j];
                }
                else if (av[i][j] >= 'A' && av[i][j] <= 'Z')
                    c = av[i][j] + 32;
                else
                    c = av[i][j];
                write(1, &c, 1);
                j++;
            }
            j = 0;
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
}