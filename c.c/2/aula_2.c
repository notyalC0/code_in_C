#include <stdio.h>

int main()
{

  int numero;
  int mult;
  int soma = 0;

  printf("digite um numero inteiro: ");
  scanf("%d", &numero);

  for (int i = 1; i <= 10; i++)
  {
    mult = numero * i;
    printf(" %d X %d = %d \n", numero, i, mult);
    soma = soma + mult;
  }

  printf("a soma total das multiplicacoes e: %d", soma);

  return 0;
}
