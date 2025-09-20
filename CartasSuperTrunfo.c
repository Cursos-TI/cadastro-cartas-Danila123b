#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1,estado2;
  char codigo1[4], codigo2[4];
  char cidade1[40], cidade2[40];
  int populacao1, populacao2;
  float area1,area2;
  float pib1,pib2;
  int pontos1, pontos2;

  // Área para entrada de dados
  printf("Cadastro de duas cartas\n");

  //primeira carta

  printf("Carta 1 \n");
  printf("Digite o estado (A-z):");
  scanf("%c",&estado1);

  printf("Digite o codigo (ex:A01, A02):");
  scanf("%s",codigo1);

  printf("Digite o nome da cidade:");
  scanf("%s",cidade1);

  printf("Digite a populacao:");
  scanf("%d",&populacao1);

  printf("Digite a area:");
  scanf("%f",&area1);

  printf("Digite o pib:");
  scanf("%f",&pib1);

  printf("Digite o numero de pontos turisticos:");
  scanf("%d",&pontos1);

  //segunda carta

  printf("carta 2 \n");
  printf("Digite o estado:");
  scanf(" %c", &estado2);

  printf("Digite o codigo (ex:A01, A02):");
  scanf("%s",codigo2);

  printf("Digite o nome da cidade:");
  scanf("%s",cidade2);

  printf("Digite a populacao:");
  scanf("%d",&populacao2);

  printf("Digite a area:");
  scanf("%f",&area2);

  printf("Digite o pib:");
  scanf("%f",&pib2);

  printf("Digite o numero de pontos turisticos:");
  scanf("%d",&pontos2);

  // Área para exibição dos dados da cidade

  printf("Dados cadastrados\n");

  printf(" Carta 1 \n");
  printf("Estado:%c\n",estado1);
  printf("Codigo:%s\n",codigo1);
  printf("Cidade:%s\n",cidade1);
  printf("Populacao:%d\n",populacao1);
  printf("Area:%.2f\n",area1);
  printf("PIB:%.2f\n");
  printf("Pontos Turistico:%d\n", pontos1);

  printf(" Carta 2 \n");
  printf("Estado:%c\n", estado2);
  printf("Codigo:%s\n",codigo2);
  printf("Cidade:%s\n",cidade2);
  printf("Populacao:%d\n",populacao2);
  printf("Area:%d\n",area2);
  printf("PIB:%.2f\n",pib2);
  printf("Pontos Turisticos:%d\n", pontos2);


return 0;
} 
