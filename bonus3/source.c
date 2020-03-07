#include <stdio.h>

int main(int ac, char **av)
{
    char    ptr[132];
    int     i = 0;
    int     size;
    FILE    *pass;

    pass = fopen("/home/user/end/.pass", "r");
    while (i++ < 33)
        ((int *)ptr)[i] = 0;
    if (pass)
    {
        if (ac == 2)
        {
            fread(ptr, 1, 66, pass);
            i = atoi(av[1]);
            ptr[i] = 0;
            fread(ptr + 66, 1, 65, pass);
            fclose(pass);
            if (strcmp(ptr, av[1]) == 0)
                execl("/bin/sh", "sh", 0);
            else
                puts(ptr + 66);
        }
    }
}