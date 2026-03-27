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
int faturamentoTotal = 0;

void entrada() {
  int vaga;
  int indice;
  do {
    printf("Escolha o numero da vaga: ");
    scanf("%d", &vaga);
    indice = vaga - 1;

    if(vagas[indice].status == 1) {
      printf("Esta vaga esta ocupada");
    }

  } while (vaga < 0 || vaga > 10);
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
    printf("Escolha uma opcao: \n 1 - Entrada de Veiculo \n 2 - Saida de Veiculo \n 3 - Listar Vagas \n 4 - Relatorio de Faturamento \n 0 - Sair: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
      entrada();
      break;
    case 2:
      saida();
      break;
    case 3:
      ListarVagas();
      break;
    case 4:
      relatorioDeFaturamento();
      break;
    }

  } while (opcao != 0);

  return 0;
}
