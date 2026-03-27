#include <stdio.h>

int main()
{
  int numero = 10;
  int *p;

  p = &numero;

  printf("Valor do numero: %d \n", numero);
  printf("Valor do numero: %p \n", &numero);
  printf("Valor do numero: %p \n", p);

  *p = 20;

  printf("Valor do numero: %d", numero);
  return 0;
}
