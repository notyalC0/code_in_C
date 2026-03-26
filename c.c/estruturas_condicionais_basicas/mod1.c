#include <stdio.h>

int main()
{
  float nota1;
  float nota2;
  float media;

  printf("digite a nota 1: ");
  scanf("%f", &nota1);
  printf("digite a nota 2: ");
  scanf("%f", &nota2);

  media = (nota1 + nota2) / 2.0;

  if (media >= 7.0)
  {
    printf("Aluno aprovado com media: %.2f", media);
  }
  else if (media >= 5.0 && media < 7.0)
  {
    printf("Aluno em recuperacao com media: %.2f", media);
  }
  else if (media < 5)
  {
    printf("Aluno reprovado com media: %.2f", media);
  }

  return 0;
}
