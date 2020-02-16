#include <stdio.h>

void o(void)
{
    system("/bin/sh");
}

void n(void)
{
    char    buff[0x200];

    fgets(buff, 0x200, stdin);
    printf(buff);
    exit(1);
}

int main(void)
{
    n();
}
