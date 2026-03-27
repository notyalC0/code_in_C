#include <stdio.h>
#include <stdlib.h>
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

int main()
{
  int n;
  int valorFinal;

  printf("qual sera o tamanho do vetor?: ");
  scanf("%d", &n);

  int *p;
  p = (int *)malloc(n * sizeof(int));

  if (p == NULL)
  {
    printf("Erro: Memoria insuficiente!\n");
    return 1;
  }

  for (int i = 0; i < n; i++)
  {
    printf("preencha o vetor na posicao [%d]: ", i);
    scanf("%d", &p[i]);
  }

  encontrarMaior(p, n, &valorFinal);
  printf("O maior valor encontrado foi: %d\n", valorFinal);
  free(p);
}
