#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Livro
{
  int id;
  char nome[50];
  char autor[50];
  float valor;
};

void salvarArquivo(struct Livro *biblioteca, int n)
{

  FILE *arquivo = fopen("biblioteca.txt", "w");

  if (arquivo == NULL)
  {
    printf("erro ao abrir o arquivo para salvar");
    return;
  }

  for (int i = 0; i < n; i++)
  {
    fprintf(
        arquivo, "%d|%s|%s|%.2f\n",
        biblioteca[i].id,
        biblioteca[i].nome,
        biblioteca[i].autor,
        biblioteca[i].valor);
  }

  fclose(arquivo);
  printf("Arquivo salvo com sucesso!");
}

int carregarArquivo(struct Livro **biblioteca)
{

  FILE *arquivo = fopen("biblioteca.txt", "r");
  char linha[100];
  int contador = 0;

  if (arquivo == NULL)
  {
    printf("Erro ao abrir o arquivo \n");
    return 0;
  }

  while (fgets(linha, sizeof(linha), arquivo) != NULL)
  {
    contador++;
  }

  if (contador == 0)
  {
    fclose(arquivo);
    return 0;
  }

  rewind(arquivo);
  printf("o arquivo tem: %d linhas. \n", contador);

  *biblioteca = (struct Livro *)malloc(contador * sizeof(struct Livro));

  for (int i = 0; i < contador; i++)
  {
    fscanf(arquivo, "%d|%[^|]|%[^|]|%f\n", &(*biblioteca)[i].id, (*biblioteca)[i].nome, (*biblioteca)[i].autor, &(*biblioteca)[i].valor);
  }

  fclose(arquivo);
  return contador;
}

int main()
{
  struct Livro *biblioteca = NULL;
  int n;

  n = carregarArquivo(&biblioteca);
  if (n > 0)
  {
    printf("\nSistema carregado! %d livros encontrados no arquivo.\n", n);
  }
  else
  {
    printf("\nArquivo vazio ou nao encontrado.\n");
    printf("digite a quantidade de livros: ");
    scanf("%d", &n);

    biblioteca = (struct Livro *)malloc(n * sizeof(struct Livro));

    if (biblioteca == NULL)
    {
      printf("erro ao alocar memoria");
      return 1;
    }

    for (int i = 0; i < n; i++)
    {
      biblioteca[i].id = i + 1;

      printf("digite o nome do livro: ");
      scanf(" %[^\n]s", biblioteca[i].nome);

      printf("digite o nome do autor: ");
      scanf(" %[^\n]s", biblioteca[i].autor);

      printf("digite o valor do livro: ");
      scanf("%f", &biblioteca[i].valor);
    }

    printf("memoria alocada para %d livros com sucesso!\n", n);
  }

  for (int i = 0; i < n; i++)
  {
    printf("ID: %d | Livro: %s\n", biblioteca[i].id, biblioteca[i].nome);
  }

  salvarArquivo(biblioteca, n);
  free(biblioteca);
  return 0;
}
