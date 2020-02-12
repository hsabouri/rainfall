int main(int ac, char **av)
{
    int *a = malloc(8);
    *a = 1;

    int *b = malloc(8);
    *b = 1; // = *a

    int *c = malloc(8);
    *c = 2;

    int *d = malloc(8);
    *d = 2; // = *c;

    return (0);
}