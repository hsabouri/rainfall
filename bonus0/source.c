#include <unistd.h>
#include <string.h>
#include <stdio.h>

char *panel_addr = " - ";

void p(char *dest, char *s)
{
    char    buff[4096];
    char    *rem;

    puts(s); //puts " - "

    read(0, buff, 4096);
    rem = strchr(buff, '\n');
    *rem = '\0';
    strncpy(dest, buff, 20);
}

void pp(char *dest)
{
    char    *src = panel_addr;
    char    *b_s;
    int     i;

    p(dest, src);
    p(dest + 20, src);

    // dont know.. strcpy(dest, a_s);
    i = 0;
    while (dest[i] != '\0')
        i++;
    dest[i] = ' ';
    strcat(dest, dest + 20);
}

int main(int ac, char **av, char **envp)
{
    char s[42];

    pp(s);
    puts(s);
}
