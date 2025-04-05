#include <stdio.h>

// Função para calcular densidade populacional
float calcularDensidadePopulacional(int populacao, float area) {
    return (float)populacao / area;
}

// Função para calcular PIB per capita
float calcularPibPerCapita(float pib, int populacao) {
    return pib / populacao;
}

int main() {
    // Cadastro de carta 1
    int codigo1;
    char estado1[3];
    char nomeDaCidade1[50];
    int populacao1;
    float areaKm1;
    float pib1;
    int numeroDePontosTuristicos1;

    // Cadastro de carta 2
    int codigo2;
    char estado2[3];
    char nomeDaCidade2[50];
    int populacao2;
    float areaKm2;
    float pib2;
    int numeroDePontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    // Entrada de dados para carta 1
    printf("Coloque o código da carta 1:\n");
    scanf("%d", &codigo1);

    printf("Coloque o estado abreviado (EX -> RJ,SP):\n");
    scanf("%2s", estado1);

    printf("Coloque o nome da cidade:\n");
    scanf("%49s", nomeDaCidade1);

    printf("Coloque a população da cidade:\n");
    scanf("%d", &populacao1);

    printf("Coloque a área em km²:\n");
    scanf("%f", &areaKm1);

    printf("Coloque o PIB da cidade:\n");
    scanf("%f", &pib1);

    printf("Coloque o número de pontos turísticos:\n");
    scanf("%d", &numeroDePontosTuristicos1);

    // Entrada de dados para carta 2
    printf("Coloque o código da carta 2:\n");
    scanf("%d", &codigo2);

    printf("Coloque o estado abreviado (EX -> RJ,SP):\n");
    scanf("%2s", estado2);

    printf("Coloque o nome da cidade:\n");
    scanf("%49s", nomeDaCidade2);

    printf("Coloque a população da cidade:\n");
    scanf("%d", &populacao2);

    printf("Coloque a área em km²:\n");
    scanf("%f", &areaKm2);

    printf("Coloque o PIB da cidade:\n");
    scanf("%f", &pib2);

    printf("Coloque o número de pontos turísticos:\n");
    scanf("%d", &numeroDePontosTuristicos2);

    // Calcular densidade populacional e PIB per capita para carta 2
    densidadePopulacional2 = calcularDensidadePopulacional(populacao2, areaKm2);
    pibPerCapita2 = calcularPibPerCapita(pib2, populacao2);

    // Exibir informações da carta 2 cadastrada
    printf("Carta 2\n");
    printf("Código da carta 2: %d\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Nome da cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f\n", areaKm2);
    printf("PIB: %.2f\n", pib2);
    printf("Quantidade de pontos turísticos: %d\n", numeroDePontosTuristicos2);
    printf("Densidade populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);

    // Comparar cartas
    int opcao;
    printf("***Escolha o atributo que deseja comparar***\n");
    printf("1 - População.\n");
    printf("2 - Área.\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica.\n");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Vamos comparar a população:\n");
            printf("A população de %s é: %d hab. População de %s é: %d hab.\n", nomeDaCidade1, populacao1, nomeDaCidade2, populacao2);
            if(populacao1 > populacao2) {
                printf("### A CARTA UM VENCEU!! ###\n");
            } else if(populacao1 < populacao2) {
                printf("###  A CARTA DOIS VENCEU!! ###\n");
            } else {

                printf("### EMPATE ###\n");
            }
            break; // Adicionado para encerrar o case 1

        case 2:
            printf("Vamos comparar a área:\n");
            // Lógica para comparar a área
            break;

        case 3:
            printf("Vamos comparar o PIB:\n");
            // Lógica para comparar o PIB
            break;
            
        
            case 4:
            printf("Vamos comparar o número de pontos turísticos:\n");
            // Lógica para comparar os pontos turísticos
            break;

        case 5:
            printf("Vamos comparar a densidade demográfica:\n");
            // Lógica para comparar a densidade demográfica
            break;

            default:
            printf("Opção inválida!\n");
            break;
    }

    return 0; // Finalizando o programa
}