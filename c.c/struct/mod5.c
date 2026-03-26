#include <stdio.h>
#include <string.h>

struct Produto
{
  char nome[20];
  float preco;
};

void main()
{

  struct Produto produtos[3];
  int indiceMaior = 0;

  printf("digite uma lista de produtos \n");
  for (int i = 0; i < 3; i++)
  {
    printf("digite o nome do %d produto: ", i + 1);
    scanf("%s", produtos[i].nome);
    printf("digite o preco do %d produto: ", i + 1);
    scanf("%f", &produtos[i].preco);
  }

  for (int i = 0; i < 3; i++)
  {
    if (produtos[i].preco > produtos[indiceMaior].preco)
    {
      indiceMaior = i;
    }
  }

  printf("O produto %s tem o maior preco sendo de: %.2f ", produtos[indiceMaior].nome, produtos[indiceMaior].preco);
}
