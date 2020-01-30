#include <stdio.h>

int run(void)
{
    fprint("Good.. Wait what ?\n", 0x13, 1, 1);
    system("/bin/sh");
}

int main(void)
{
    char buffer[76];

    gets(buffer);
    return 0;
}
