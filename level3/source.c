int m = 0;

void    v(void)
{
    char    str[520];

    fgets(str, 512, 1);
    printf(str);
    if (m == 64)
    {
        fwrite("wait...", 1, 12, 1);
        system("/bin/sh");
    }
    return ;
}

int     main(void)
{
    v();
    return (0);
}
