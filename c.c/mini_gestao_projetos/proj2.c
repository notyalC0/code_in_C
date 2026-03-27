#include <stdio.h>
#include <string.h>

struct Veiculo
{
  char placa[7];
  char modelo[20];
  int horaEntrada;
  int horaSaida;
  int status;
};

#define N 10

struct Veiculo vagas[N];
float faturamentoTotal = 0;

void registroEntrada()
{
  int vaga;
  int indice;

  printf("Escolha o numero da vaga: ");
  scanf("%d", &vaga);
  indice = vaga - 1;

  if (vaga < 1 || vaga > N)
  {
    printf("Vaga inexistente!\n");
    return;
  }

  if (vagas[indice].status == 1)
  {
    printf("Esta vaga esta ocupada");
  }
  else
  {
    printf("Digite a placa do veiculo: ");
    scanf(" %[^\n]s", vagas[indice].placa);

    printf("Digite o Modelo do veiculo: ");
    scanf(" %[^\n]s", vagas[indice].modelo);

    printf("Digite a hora de entrada: ");
    scanf("%d", &vagas[indice].horaEntrada);

    vagas[indice].status = 1;
  }
}

void registroSaida()
{
  int vaga;
  int indice;
  int hora;
  float valor;

  printf("Escolha o numero da vaga: ");
  scanf("%d", &vaga);
  indice = vaga - 1;

  if (vaga < 1 || vaga > N)
  {
    printf("Vaga inválida!\n");
    return;
  }

  if (vagas[indice].status == 1)
  {
    printf("Digite a hora de saida: ");
    scanf("%d", &vagas[indice].horaSaida);
    hora = vagas[indice].horaSaida - vagas[indice].horaEntrada;
    if (hora < 0)
      hora += 24;
    if (hora == 0)
      hora = 1;
    valor = hora * 10.0;
    faturamentoTotal += valor;
    vagas[indice].status = 0;
  }
  else
  {
    printf("opcao indisponivel");
  }
}

void listarVagas()
{
  for (int i = 0; i < N; i++)
  {
    if (vagas[i].status == 0)
    {
      printf("Vaga %d: [LIVRE] \n", i + 1);
    }
    else
    {
      printf("Vaga %d: [OCUPADA] - Placa: [%s] \n", i + 1, vagas[i].placa);
    }
  }
}

void relatorioDeFaturamento()
{
  printf("O seu faturamento total atual e de: %.2f \n", faturamentoTotal);
}

int main()
{

  for (int i = 0; i < N; i++)
  {
    vagas[i].status = 0;
  }
  int opcao;
  do
  {
    printf("Escolha uma opcao: \n 1 - Entrada de Veiculo \n 2 - Saida de Veiculo \n 3 - Listar Vagas \n 4 - Relatorio de Faturamento \n 0 - Sair \n Escolha: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
      registroEntrada();
      break;
    case 2:
      registroSaida();
      break;
    case 3:
      listarVagas();
      break;
    case 4:
      relatorioDeFaturamento();
      break;
    }

  } while (opcao != 0);

  return 0;
}
