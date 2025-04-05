#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){

    //Jose Gregorio
    //Cadastro de carta 1
    
    int codigo1;
    char estado[3];
    char nomedacidade[50];
    int populaçao1;
    float areakm;
    float pib;
    int numerodepontos1;

    //cadastro de carta 2

    int codigo2;
    char estado2[3];
    char nomedacidade2[50];
    int populaçao2;
    float areakm2;
    float pib2;
    int numerodepontos2;
    float densidadepopulacional2;
    float pibpercapita2;


  printf("Coloque o codigo da carta:\n");
  scanf("%d", &codigo1);

  printf("Coloque o estado abreviado (EX -> RJ,SP):\n");
  scanf("%2s", "estado1");

  printf("Coloque o nome da cidade:\n");
  scanf("%49s", "nomedacidade1");

  printf("Coloque a populaçao da cidade:\n");
  scanf("%d", &populaçao2);

  printf("Coloque a area em km²:\n");
  scanf("%f", &"areakm1");

  printf("Coloque o PIB da cidade:\n");
  scanf("%f", "pib1");

  printf("Coloque o numero de pontos turisticos:\n");
  scanf("%d", &numerodepontos1);

  //Funçao para calcular densidade PIB per capita da carta 1

  densidadepopulacional2 = (float)populaçao2 / areakm2;
  pibpercapita2 / areakm2;
  pibpercapita2 = pib2 / populaçao2; 

  //calculando o superpoder da carta 2
  superpoder2 = (float)populaçao2 + areakm2 + pib2 + numerodepontos2 + pibpercapita2 + (1/densidadepopulacional2);

  //exibir as informaçoes da carta 2 cadastrada

  printf("Carta 2\n");
  printf("Codigo da carta2: %d\n", codigo2);
  printf("Estado: %s\n", "estado2");
  printf("Nome da cidade: %s\n", "nomedacidade2");
  printf("Populaçao: %d\n", "populaçao2");
  printf("Area em km²: %.2f\n", "areakm2");
  printf("PIB: %.2f\n", "pib2");
  printf("Quantidade de pontos turisticos: %d\n", "numerodepontos2");
  printf("Densidade populacional: %.2f\n", "densidadepopulacional2");
  printf("PIB per capita e: %.2f\n", "pibpercapita2");

  //Comparando as cartas

  printf("***Escolha o atriuto que deseja comparar***\n");
  printf("1 - Populaçao.\n");
  printf("2 - Area.\n");
  printf("3 - PIB\n");
  printf("4 - Numero de pontos turisticos\n");
  printf("5 - Densidade demografica.\n");
  scanf("%d", &"opçao");

  /* O switch e uma estrutura de controle que facilita a escolha entre multiplas execuçoes possiveis com base no valor de uma variavel ou expressao*/
  
  //Exibindo resultados:

  printf("### RESULTADO COMPARAÇAO ###\n");
  printf("### %s X %s ###\n", "nomedacidade1", nomedacidade2);
  switch(opçao){ 
    //Switch e uma estrutura de condiçao que define o codigo a ser executado com base em uma comparaçao de valores.
    case 1:
  printf("Vamos comparar a populaçao:\n");
  printf("A populaçao de %s e: %d hab. Populaçao de %s e: %d hab.\n", "nomedacidade1, populaçao1, nomedacidade2, populaçao2");
  if("populaçao1 > populaçao2"){
    printf("### A CARTA UM VENCEU!! ###\n");
  } else if("populaçao1 < populaçao2"){
    printf("### A CARTA DOIS VENCEU11 ###\n");
  } else {
    printf("### EMPATE ###\n");
  }
  break;
  default:
  printf("opçao invalida\n");
  break;
}
  case 2:
  printf("Vamos comparar a area:\n");
  printf("A area de %s e: %f km². Area de %s e: %f km².\n",nomedacidade1, areakm1, nomedacidade2, areakm2);

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
  printf("O PIB de %s e: %f. O PIB de %s e: %f.\n", nomedacidade1, pib1, nomedacidade2, pib2);
  
  if(pib1 > pib2){
    printf("***  A CARTA UM VENCEU!! ***\n");
  }else if(pib1 < pib2){
    printf("*** A CARTA DOIS VENCEU!! ***\n");
  }else{
    printf("### EMPATOU!! ###\n");
  }
  break;

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
  break;

  case 5:
  printf("Vamos comparar a densidade demografica:\n");
  printf("A densidade demografica de %s e: %f. A densidade demografica de %s e: %f.\n", nomedacidade1, densidadepopulacional1, nomedacidade2, densidadepopulacional2);

  if(densidadepopulacional1 > densidadepopulacional2){
    printf("### A CARTA UM VENCEU!! ###\n");
  }else if(densidadepopulacional1 > densidadepopulacional2){
    printf("### A CARTA DOIS VENCEU!! ###\n");
  }else{
    printf("###  EMPATE!! ###\n");
  }
  break;

  default:
  printf("### OPÇAO INVALIDA ###\n");
  break;
}


return 0;
}
// fim do codigo 
