#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **av)
{
    char    s1[40];
    int     a;
    int     b;

    a = atoi(av[1]);
    if (a <= 9)
    {
        b = a * 4;
        memcpy(s1, av[2], b);
        if (b == 0x574f4c46) //1464814662
            execl("/bin/sh", "sh");
    }
}
