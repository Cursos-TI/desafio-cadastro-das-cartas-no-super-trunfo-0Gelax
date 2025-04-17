#include <stdio.h>

// Definição da estrutura para armazenar os dados de uma carta
struct CartaSuperTrunfo {
  char estado;           // Letra de A a H
  char codigo[50];            // Exemplo: A01 -- Se digitar o número ele pode ser visto como binário, caso escreva com 0 no inicio;
  char nomeCidade[50];   // Nome da cidade
  int populacao;         // Número de habitantes
  float area;            // Área em km²
  float pib;             // PIB em bilhões
  int pontosTuristicos;  // Número de pontos turísticos
};

int main() {
  // Declaração de duas cartas
  struct CartaSuperTrunfo carta1;
  struct CartaSuperTrunfo carta2;

  // Instruções para o usuário - Carta 1
  printf("Cadastro da Carta 1:\n");
  printf("Digite a letra do Estado (A-H): ");
  scanf(" %c", &carta1.estado);

  printf("Digite o código da carta (ex: 01): ");
  scanf("%s", &carta1.codigo);

  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", &carta1.nomeCidade); // Lê até o final da linha

  printf("Digite a população da cidade: ");
  scanf("%d", &carta1.populacao);

  printf("Digite a área da cidade (em km²): ");
  scanf("%f", &carta1.area);

  printf("Digite o PIB da cidade (em bilhões): ");
  scanf("%f", &carta1.pib);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &carta1.pontosTuristicos);

  system("clear");

  // Instruções para o usuário - Carta 2
  printf("Cadastro da Carta 2:\n");
  printf("Digite a letra do Estado (A-H): ");
  scanf(" %c", &carta2.estado);

  printf("Digite o código da carta (ex: 01): ");
  scanf("%s", &carta2.codigo);

  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", &carta2.nomeCidade); // Lê até o final da linha

  printf("Digite a população da cidade: ");
  scanf("%d", &carta2.populacao);

  printf("Digite a área da cidade (em km²): ");
  scanf("%f", &carta2.area);

  printf("Digite o PIB da cidade (em bilhões): ");
  scanf("%f", &carta2.pib);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &carta2.pontosTuristicos);

  system("clear");

  // Exibição dos dados da Carta 1
  printf("Carta 1:\n");
  printf("Estado: %c\n", carta1.estado);
  printf("Código: %c%s\n",carta1.estado, carta1.codigo);
  printf("Nome da Cidade: %s\n", carta1.nomeCidade);
  printf("População: %d\n", carta1.populacao);
  printf("Área: %.2f km²\n", carta1.area);
  printf("PIB: %.2f bilhões de reais\n", carta1.pib);
  printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);

  printf("\n");

  // Exibição dos dados da Carta 2
  printf("Carta 2:\n");
  printf("Estado: %c\n", carta2.estado);
  printf("Código: %c%s\n",carta2.estado, carta2.codigo);
  printf("Nome da Cidade: %s\n", carta2.nomeCidade);
  printf("População: %d\n", carta2.populacao);
  printf("Área: %.2f km²\n", carta2.area);
  printf("PIB: %.2f bilhões de reais\n", carta2.pib);
  printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

  return 0;
}
