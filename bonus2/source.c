#include <stdlib.h>
#include <string.h>

int     language = 0;

void    greetuser(char *s1, char *name)
{
    if (language == 0) // en
    {
        strcpy(s1, "Hello "); //Not a strcpy in original asm
    }
    else if (language == 1) // fi
    {
        strcpy(s1, "Hyvää päivää "); //Not a strcpy in original asm
    }
    else if (language == 2) // nl
    {
        strcpy(s1, "Goedemiddag! "); //Not a strcpy in original asm
    }
    strcat(s1, name);
    puts(s1);
}

int     main(int ac, char **av)
{
    char    s1[156];
    char    dest[76];
    char    *lang_env;
    int     i = 19;

    if (ac == 3)
    {
        while (i != 0)
        {
            i--;
            ((int *)dest)[i] = 0;
        }
        strncpy(dest, av[1], 40);
        strncpy(dest + 40, av[2], 32);
        lang_env = getenv("LANG");
        if (lang_env)
        {
            if (memcmp(lang_env, "fi", 2))
                language = 1;
            else if (memcmp(lang_env, "nl", 2))
                language = 2;
        }
        i = 0;
        while (i++ < 19)
            ((int *)dest)[i] = ((int *)s1)[i];
        greetuser(s1, dest);
    }
    return (0);
}