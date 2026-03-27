#include <stdio.h>

void trocarValores(int *pa, int *pb)
{
  int assist = *pa;

  *pa = *pb;

  *pb = assist;
}

int main()
{
  int a = 5;
  int b = 10;

  printf("%d %d \n", a, b);

  trocarValores(&a, &b);
  printf("%d %d \n", a, b);

  return 0;
}
