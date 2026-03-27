#include <stdio.h>

int econtrarMaior(int vetor[], int tamanho)
{
  int maior = vetor[0];
  for (int i = 0; i < tamanho; i++)
  {

    if (vetor[i] > maior)
    {
      maior = vetor[i];
    }
  }
  return maior;
}

int encontrarMenor(int vetor[], int tamanho)
{
  int menor = vetor[0];
  for (int i = 0; i < tamanho; i++)
  {
    if (vetor[i] < menor)
    {
      menor = vetor[i];
    }
  }
  return menor;
}

int main()
{
  int numeros[5];
  for (int i = 0; i < 5; i++)
  {
    printf("digite o %dº inteiros: ", i + 1);
    scanf("%d", &numeros[i]);
  }

  int maior_numero = econtrarMaior(numeros, 5);

  int menor_numero = encontrarMenor(numeros, 5);

  printf("O maior numero do array e: %d e o menor numero e: %d", maior_numero, menor_numero);
  return 0;
}
