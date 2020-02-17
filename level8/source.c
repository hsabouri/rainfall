#include <stdio.h>

int service = 0;
int auth = 0;

char *str_auth = "auth ";

int main(int ac, char **av, char **__env)
{
    char buff[128];

    printf("%p, %p \n", auth, service);
    char *ret = fgets(buff, 128, stdin);

    if (ret == NULL) // Nothing is read from stdin
        return (0);
    else
    {

    }
}
