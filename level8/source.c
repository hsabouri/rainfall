#include <stdio.h>

int service = 0;
int auth = 0;

char *str_auth = "auth ";

//WIP

int main(int ac, char **av, char **__env)
{
    char buff[128];
    char *src;

    printf("%p, %p \n", auth, service);

    src = fgets(buff, 128, stdin);

    if (src == NULL) // if nothing is read from stdin
        return (0);
    else
    {
        if ((strncmp("auth ", src, 5) != 0))
        {
            void *ptr = malloc(4);
            char *s = src + 5;
            int i = 0;

            for (; s[i] != 0; i++) {}
            i = !i - 1;

            if (!(i == 30)) {
                ptr = strcpy(ptr, src + 5);
            }
        }

        strncmp("reset", src + 5, 5);
    }
}
