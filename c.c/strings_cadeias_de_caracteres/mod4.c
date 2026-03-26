#include <stdio.h>
#include <string.h>

void main()
{

  char lista[3][20];
  char nome[20];
  int encontrado = 0;
  for (int i = 0; i < 3; i++)
  {
    printf("digite o %d nome da lista: ", i);
    scanf("%s", lista[i]);
  }

  printf("digite um nome para procurar na lista: ");
  scanf("%s", nome);

  for (int i = 0; i < 3; i++)
  {
    if (strcmp(nome, lista[i]) == 0)
    {
      encontrado = 1;
      break;
    }
  }

  if (encontrado)
  {
    printf("O nome esta na lista");
  }
  else
  {
    printf("O nome nao esta na lista");
  }
}
