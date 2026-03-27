#include <stdio.h>

void zerarVariavel(int *p)
{
  *p = 0;
}

int main()
{
  int x = 50;
  printf("%d \n", x);

  zerarVariavel(&x);

  printf("%d \n", x);

  return 0;
}
