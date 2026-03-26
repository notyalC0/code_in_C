#include <stdio.h>

int main()
{
  int numeros[5];
  int maior, menor;

  for (int i = 0; i < 5; i++)
  {
    printf("digite o %dº inteiros: ", i + 1);
    scanf("%d", &numeros[i]);
  }

  maior = numeros[0];
  menor = numeros[0];

  for (int i = 0; i < 5; i++)
  {

    if (numeros[i] > maior)
    {
      maior = numeros[i];
    }

    if (numeros[i] < menor)
    {
      menor = numeros[i];
    }
  }

  printf("O maior numero do array e: %d e o menor numero e: %d", maior, menor);
  return 0;
}
