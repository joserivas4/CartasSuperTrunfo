#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

    //Jose Gregorio
    //Cadastro de carta 1
    
    char estado1[23];
    char codigo1[20];
    char nomedacidade1[20];
    float populaçao1;
    float areakm1;
    float pib1;
    int numerodepontos1;
    float densidadepopulacional1;
    float pibpercapita1;
    int resultado1;
    float superpoder1;
    int opçao;

    //cadastro de carta 2

    char estado2[23];
    char codigo2[20];
    char nomedacidade2[20];
    float populaçao2;
    float areakm2;
    float pib2;
    int numerodepontos2;
    float densidadepopulacional2;
    float pibpercapita2;
    float superpoder2;

  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade
  
  //Entrada e saida de dados da 1carta abaixo:

  printf("Coloque o codigo da carta:\n");
  scanf("%s", codigo1);

  printf("Coloque o estado abreviado (EX -> RJ,SP):\n");
  scanf("%s", estado1);

  printf("Coloque o nome da cidade:\n");
  scanf("%s", nomedacidade1);

  printf("Coloque a populaçao da cidade:\n");
  scanf("%f", &populaçao1);

  printf("Coloque a area em km²:\n");
  scanf("%f", &areakm1);

  printf("Coloque o PIB da cidade:\n");
  scanf("%f", &pib1);

  printf("Coloque o numero de pontos turisticos:\n");
  scanf("%d", &numerodepontos1);

  //Funçao para calcular densidade PIB per capita da carta 1

  densidadepopulacional1 = (float)populaçao1 / areakm1;
  pibpercapita1 / areakm1;
  pibpercapita1 = pib1 / populaçao1; 

  //calculando o superpoder da carta 2
  superpoder1 = (float)populaçao1 + areakm1 + pib1 + numerodepontos1 + pibpercapita1 + (1/densidadepopulacional1);

  //exibir as informaçoes da carta 2 cadastrada

  printf("Carta 2\n");
  printf("Codigo da carta2: %s\n", codigo2);
  printf("Estado: %s\n", estado2);
  printf("Nome da cidade: %s\n", nomedacidade2);
  printf("Populaçao: %.2f\n", populaçao2);
  printf("Area em km²: %.2f\n", areakm2);
  printf("PIB: %.2f\n", pib2);
  printf("Quantidade de pontos turisticos: %d\n", numerodepontos2);
  printf("Densidade populacional: %.2f\n", densidadepopulacional2);
  printf("PIB per capita e: %.2f\n", pibpercapita2);

  //Comparando as cartas

  printf("***Escolha o atriuto que deseja comparar***\n");
  print("1 - Populaçao.\n");
  printf("2 - Area.\n");
  printf("3 - PIB\n");
  printf("4 - Numero de pontos turisticos\n");
  printf("5 - Densidade demografica.\n");
  scanf("%d", &opçao);

  /* O switch e uma estrutura de controle que facilita a escolha entre multiplas execuçoes possiveis com base no valor de uma variavel ou expressao*/
  
  //Exibindo resultados:

  printf("### RESULTADO COMPARAÇAO ###\n");
  printf("### %s X %s ###\n", nomedacidade1, nomedacidade2);
  switch (opçao){//Switch e uma estrutura de condiçao que define o codigo a ser executado com base em uma comparaçao de valores.
    case 1:
  printf("Vamos comparar a populaçao:\n");
  printf("A populaçao de %s e: %lu hab. Populaçao de %s e: %lu hab.\n", nomedacidade1, populaçao1, nomedacidade2, populaçao2);
  if(populaçao1 > populaçao2){
    printf("### A CARTA UM VENCEU!! ###\n";
  } else if (populaçao1 < populaçao2){
    printf("### A CARTA DOIS VENCEU11 ###\n");
  } else {
    printf("### EMPATE ###\n");
  }
  break;
  case 2:
  printf("Vamos comparar a area:\n");
  printf("A area de %s e: %lu km². Area de %s e: %f km².\n",nomedacidade1, areakm1, nomedacidade2, areakm2);

  if(areakm1 > areakm2){
    printf("*** A CARTA UM VENCEU!!***\n");
  }else if (areakm1 < areakm2){
    printf("*** A CARTA DOIS VENCEU!!***\n");
  }else{
    printf("*** EMPATE!! ***\n");
  }
  break;
  case 3:
  printf("Vamos comparar o PIB:\n");
  printf("O PIB de %s e: %if. O PIB de %s e: %if.\n", nomedacidade1, pib1, nomedacidade2, pib2);
  
  if(pib1 > pib2){
    printf("***  A CARTA UM VENCEU!! ***\n");
  }else if(pib1 < pib2){
    printf("*** A CARTA DOIS VENCEU!! ***\n");
  }else{
    printf("### EMPATOU!! ###\n");
  }
  brak;

  case 4:
  printf("Vamos comparar o numero de pontos turisticos:\n");
  printf("%s tem %d pontos turisticos. %s tem %d pontos turisticos.\n", nomedacidade1, numerodepontos1, nomedacidade2, numerodepontos2);
  if(numerodepontos1 > numerodepontos2){
    printf("### A CARTA UM VENCEU!! ###\n");
  }else if(numerodepontos1 < numerodepontos2){
    printf("###  A CARTA DOISVENCEU!! ###\n");
  }else{
    printf("### EMPATE ###\n");
  }
  brak;

  case 5:
  printf("Vamos comparar a densidade demografica:\n");
  printf("A densidade demografica de %s e: %f. A densidade demografica de %s e: %f.\n", nomedacidade1, densidadepopulacional1, nomedacidade2, densidadepopulacional2);

  if(densidadepopulacional1 > densidadepopulacional2){
    printf("### A CARTA UM VENCEU!! ###\n");
  }else if(densidadepopulacional1 > densidadepopulacional2){
    printf('### A CARTA DOIS VENCEU!! ###\n');
  }else{
    printf("###  EMPATE!! ###\n";
  }
  break;

  default:
  printf("### OPÇAO INVALIDA ###\n");
  break;
}


return 0;
}
// fim do codigo 
