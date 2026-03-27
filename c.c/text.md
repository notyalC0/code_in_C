# Repositório: Aprendizado em C

Repositório educacional com exercícios progressivos e projetos práticos em linguagem C, organizados por tópico.

---

## Módulos

Os módulos são exercícios didáticos que cobrem um tópico específico por vez, progredindo do básico ao avançado.

### mod1.c — Estruturas Condicionais Básicas

Calcula a média de duas notas e determina a situação do aluno:

- `>= 7.0` → Aprovado
- `>= 5.0` → Recuperação
- `< 5.0` → Reprovado

---

### mod2.c — Estruturas de Repetição

Gera a tabuada de um número digitado usando `for`, exibindo todas as multiplicações de 1 a 10 e a soma total dos resultados.

---

### mod3.c — Vetores

Lê 5 inteiros em um array e percorre o vetor para encontrar o **maior** e o **menor** valor.

### mod3Plus.c — Vetores + Modularização

Refatoração do `mod3.c` utilizando funções separadas (`encontrarMaior` e `encontrarMenor`) para demonstrar o conceito de modularização.

---

### mod4.c — Strings / Cadeias de Caracteres

Preenche uma lista de 3 nomes e busca um nome informado pelo usuário usando `strcmp`, informando se foi encontrado ou não.

---

### mod5.c — Structs

Define uma `struct Produto` (nome + preço), cadastra 3 produtos e encontra o produto com o **maior preço**.

---

### mod6.c — Ponteiros (introdução)

Introdução ao conceito de ponteiros: declaração, atribuição de endereço com `&` e desreferenciamento com `*` para alterar o valor original.

### mod6Plus.c — Ponteiros em Funções

Passa um ponteiro para uma função (`zerarVariavel`) que modifica diretamente a variável do escopo chamador, zerando seu valor.

### mod6Extra.c — Ponteiros: Troca de Valores

Implementa a troca (**swap**) de dois valores entre variáveis usando uma função com dois ponteiros como parâmetros.

### mod6Total.c — Ponteiros com Vetores e Múltiplos Retornos

Usa ponteiros para:

- Encontrar o maior valor de um vetor via função (`encontrarMaior`)
- Retornar dois valores de uma única função (`somaEsub`): soma e subtração de dois números

### mod6Ultimate.c — Alocação Dinâmica de Memória

Combina ponteiros com `malloc` e `free` para criar um vetor de tamanho definido em tempo de execução, preencher os valores e encontrar o maior elemento.

---

## Projetos

Os projetos são aplicações completas que integram múltiplos conceitos em sistemas funcionais com menus interativos.

### proj1.c — Sistema de Gestão de Alunos

Sistema de cadastro escolar com até 10 alunos:

- Cadastro com nome, matrícula e 3 notas
- Cálculo automático de média e situação (aprovado/reprovado)
- Listagem de todos os alunos e relatório geral

### proj2.c — Sistema de Gestão de Estacionamento

Sistema de controle de estacionamento com até 10 vagas:

- Registro de entrada e saída de veículos (placa, modelo, hora)
- Controle de vagas disponíveis/ocupadas
- Cálculo de tempo de permanência e faturamento total
