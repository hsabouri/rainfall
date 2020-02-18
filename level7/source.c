void    m(void)
{
    time_t  t;

    t = time();
    printf("%s - %d\n", g_c, t);
    return ;
}


int main(int ac, char **av)
{
    int *a = malloc(8);
    *a = 1;

    int *b = malloc(8);
    *b = 1; // = *a
    a[1] = b;
    int *c = malloc(8);
    *c = 2;

    b = malloc(8);
    c[1] = b;
    
    strcpy(a[1], av[1]);
    strcpy(c[1], av[2]);
    
    g_stream = fopen("/home/user/level8/.pass", "r");
    fgets(g_c, 68, g_stream);
    puts("~~");
    return (0);
}
