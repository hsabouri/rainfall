void n(void)
{
    system("/bin/cat /home/user/level7/.pass");
}

void m(void)
{
    puts("Nope");
}

int main(int ac, char **av)
{
    char *a = malloc(64);
    void **call = malloc(4);

    *call = &m;
    strcpy(a, &av[1]);
    ((void (*)(void))*call)();
    return (0);
}
