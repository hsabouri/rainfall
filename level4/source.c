int m = 0;

void p(char buff[])
{
    printf(buff);
}

void n(void)
{
    char    buff[520];

    fgets(buff, 512, 1);
    p(buff);
    if (m == 0x01025544)
    {
        system("/bin/cat /home/user/level5/.pass");
    }
    return ;
}

int main(void)
{
    n();
    return (0);
}
