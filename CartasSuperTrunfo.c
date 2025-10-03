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

   //Variaveis para calculos
  float densidade1, densidade2;
  float pibper1, pibper2;
  float superpoder1, superpoder2;

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

   //calculos da carta 1
  densidade1 = (float) populacao1 / area1;
  pibper1 = (float) pib1 / populacao1;
  superpoder1 = populacao1 + area1 + pib1 + pontos1 + pibper1 + (1/densidade1);

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

  //calculos da carta 2
  densidade2 = (float) populacao2 / area2;
  pibper2 = (float) pib2 / populacao2;
  superpoder2 = populacao2 + area2 + pib2 + pontos2 + pibper2 + (1/densidade2);

  // Área para exibição dos dados da cidade

  printf("Dados cadastrados\n");

  printf(" Carta 1 \n");
  printf("Estado:%c\n",estado1);
  printf("Codigo:%s\n",codigo1);
  printf("Cidade:%s\n",cidade1);
  printf("Populacao:%d\n",populacao1);
  printf("Area:%.2f\n",area1);
  printf("PIB:%.2f\n",pib1);
  printf("Pontos Turistico:%d\n", pontos1);
  printf("Desidade populacional: %.2f\n", densidade1);
  printf("Pib per capita: %.2f\n", pibper1);
  printf("Super poder: %.2f\n", superpoder1);

  printf(" Carta 2 \n");
  printf("Estado:%c\n", estado2);
  printf("Codigo:%s\n",codigo2);
  printf("Cidade:%s\n",cidade2);
  printf("Populacao:%d\n",populacao2);
  printf("Area:%.2f\n",area2);
  printf("PIB:%.2f\n",pib2);
  printf("Pontos Turisticos:%d\n", pontos2);
  printf("Desidade populacional: %.2f\n", densidade2);
  printf("Pib per capita: %.2f\n", pibper2);
  printf("Super poder: %.2f\n", superpoder2);

   //comparações de cartas

    printf("\n Comparações das cartas\n");

    printf("População: %s venceu\n",(populacao1 > populacao2)?"Carta1": "carta2");
    printf("Area: %s venceu\n",(area1 > area2)?"Carta1": "carta2");
    printf("Pib: %s venceu\n",(pib1 > pib2)?"Carta1": "carta2");
    printf("Pontos turisticos: %s venceu\n",(pontos1 > pontos2)?"Carta1": "carta2");
    printf("Densidade populacional: %s venceu\n",(densidade1 > densidade2)?"Carta1": "carta2");
    printf("Pib per capita: %s venceu\n",(pibper1 > pibper2)?"Carta1": "carta2");
    printf("Super poder: %s venceu\n",(superpoder1 > superpoder2)?"Carta1": "carta2");


return 0;
} 
