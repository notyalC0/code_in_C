#include <stdio.h>
#include <string.h>

#define N 10

struct Aluno
{
  int numeroMat;
  char nome[50];
  float notas[3];
  float media;
  char situacao[15];
};

struct Aluno lista[N];
int totalAlunos = 0;

void cadastrar()
{
  if (totalAlunos >= N)
  {
    printf("\n[ERRO] Limite de alunos atingido!\n");
    return;
  }

  printf("\n--- CADASTRO DE ALUNO ---\n");
  printf("Nome: ");
  scanf(" %[^\n]s", lista[totalAlunos].nome);

  float soma = 0;
  for (int j = 0; j < 3; j++)
  {
    do
    {
      printf("Nota %d (0 a 10): ", j + 1);
      scanf("%f", &lista[totalAlunos].notas[j]);
    } while (lista[totalAlunos].notas[j] < 0 || lista[totalAlunos].notas[j] > 10);
    soma += lista[totalAlunos].notas[j];
  }

  lista[totalAlunos].media = soma / 3.0;

  if (lista[totalAlunos].media >= 7.0)
  {
    strcpy(lista[totalAlunos].situacao, "Aprovado");
  }
  else
  {
    strcpy(lista[totalAlunos].situacao, "Reprovado");
  }

  lista[totalAlunos].numeroMat = 100 + totalAlunos;
  printf("Cadastro concluido! Matricula: %d\n", lista[totalAlunos].numeroMat);
  totalAlunos++;
}

void listar()
{
  if (totalAlunos == 0)
  {
    printf("\nNenhum aluno cadastrado.\n");
    return;
  }
  printf("MAT", "NOME", "MEDIA", "SITUACAO");
  printf("---------------------------------------------\n");
  for (int i = 0; i < totalAlunos; i++)
  {
    printf(lista[i].numeroMat, lista[i].nome, lista[i].media, lista[i].situacao);
  }
}

void buscar()
{
  int mat, achou = 0;
  printf("\nDigite a matricula para busca: ");
  scanf("%d", &mat);

  for (int i = 0; i < totalAlunos; i++)
  {
    if (lista[i].numeroMat == mat)
    {
      printf(
        "\nAluno encontrado: %s | Media: %.2f | Status: %s\n",
        lista[i].nome, lista[i].media, lista[i].situacao);
      achou = 1;
      break;
    }
  }
  if (!achou)
    printf("\nMatricula %d nao encontrada.\n", mat);
}

void estatisticas()
{
  if (totalAlunos == 0)
    return;
  float somaGeral = 0, maior = lista[0].media, menor = lista[0].media;
  int aprovados = 0;

  for (int i = 0; i < totalAlunos; i++)
  {
    somaGeral += lista[i].media;
    if (lista[i].media > maior)
      maior = lista[i].media;
    if (lista[i].media < menor)
      menor = lista[i].media;
    if (lista[i].media >= 7)
      aprovados++;
  }

  printf("\n--- ESTATISTICAS DA TURMA ---");
  printf("\nMedia Geral: %.2f", somaGeral / totalAlunos);
  printf("\nMaior Media: %.2f | Menor Media: %.2f", maior, menor);
  printf("\nAprovados: %d | Reprovados: %d\n", aprovados, totalAlunos - aprovados);
}

int main()
{
  int opcao;
  do
  {
    printf("\n1-Cadastrar 2-Listar 3-Buscar 4-Estatisticas 0-Sair: ");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
      cadastrar();
      break;
    case 2:
      listar();
      break;
    case 3:
      buscar();
      break;
    case 4:
      estatisticas();
      break;
    }
  } while (opcao != 0);
  return 0;
}
