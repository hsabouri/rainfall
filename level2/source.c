#include <sys/types.h>
#include <stdio.h>

void p(void)
{
  unsigned int  p_return_address;
  char          buffer[76];
  
  fflush(stdout);

  gets(buffer);

  if ((p_return_address & 0xb0000000) == 0xb0000000) {
    printf("(%p)\n", p_return_address);
    exit(1);
  }

  puts(buffer);
  strdup(buffer);

  return ;
}

int main(void)
{
    p();

    return 0;
}