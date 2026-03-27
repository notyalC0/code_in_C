#include <stdio.h>

void encontrarMaior(int *vetor, int tamanho, int *resultado)
{
  int maior = vetor[0];
  for (int i = 0; i < tamanho; i++)
  {
    if (vetor[i] > maior)
    {
      maior = vetor[i];
    }
  }
  *resultado = maior;
}

void somaEsub(int a, int b, int *soma, int *sub)
{
  int somaLocal;
  int subLocal;
  somaLocal = a + b;
  subLocal = a - b;
  *soma = somaLocal;
  *sub = subLocal;
}

int main()
{
  int numeros[5] = {12, 45, 7, 92, 31};
  int valorFinal;

  encontrarMaior(numeros, 5, &valorFinal);

  printf("O maior valor encontrado foi: %d\n", valorFinal);

  int valorSoma;
  int valorSub;

  somaEsub(4, 5, &valorSoma, &valorSub);

  printf("A soma: %d A sub: %d \n", valorSoma, valorSub);

  return 0;
}
