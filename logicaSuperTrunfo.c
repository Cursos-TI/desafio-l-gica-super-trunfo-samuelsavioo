#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas e Comparação
// Este código agora inclui a lógica para comparar duas cartas e determinar a vencedora com base em um atributo numérico.

int main() {
    // Definição das variáveis para duas cartas
    char estado1[3], estado2[3];
    char codigoDaCarta1[20], codigoDaCarta2[20];
    char nomeDaCidade1[50], nomeDaCidade2[50];
    int populacao1, populacao2;
    float areaKM2_1, areaKM2_2;
    float PIB1, PIB2;
    int numeroDePontosTuristicos1, numeroDePontosTuristicos2;
    
    // Entrada dos dados para a primeira carta
    printf("Digite o estado da primeira cidade: \n");
    scanf("%2s", estado1);

    printf("Digite o codigo da primeira carta: \n");
    scanf("%s", codigoDaCarta1);

    printf("Digite o nome da primeira cidade: \n");
    scanf(" %[^\n]", nomeDaCidade1);

    printf("Digite a populacao da primeira cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a area da primeira cidade em km²: \n");
    scanf("%f", &areaKM2_1);

    printf("Digite o PIB da primeira cidade: \n");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turisticos da primeira cidade: \n");
    scanf("%d", &numeroDePontosTuristicos1);
    
    // Entrada dos dados para a segunda carta
    printf("Digite o estado da segunda cidade: \n");
    scanf("%2s", estado2);

    printf("Digite o codigo da segunda carta: \n");
    scanf("%s", codigoDaCarta2);

    printf("Digite o nome da segunda cidade: \n");
    scanf(" %[^]s", nomeDaCidade2);

    printf("Digite a populacao da segunda cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a area da segunda cidade em km²: \n");
    scanf("%f", &areaKM2_2);

    printf("Digite o PIB da segunda cidade: \n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos da segunda cidade: \n");
    scanf("%d", &numeroDePontosTuristicos2);
    
    // Cálculo da Densidade Populacional e PIB per capita
    float densidadePop1 = populacao1 / areaKM2_1;
    float densidadePop2 = populacao2 / areaKM2_2;
    float PIBperCapita1 = PIB1 / populacao1;
    float PIBperCapita2 = PIB2 / populacao2;
    
    // Exibição das informações das cartas
    printf("\nDados da Primeira Carta:\n");
    printf("Estado: %s\nCodigo: %s\nNome: %s\nPopulacao: %d\nArea: %.2f\nPIB: %.2f\nPontos Turisticos: %d\nDensidade Populacional: %.2f\nPIB per capita: %.2f\n\n", 
        estado1, codigoDaCarta1, nomeDaCidade1, populacao1, areaKM2_1, PIB1, numeroDePontosTuristicos1, densidadePop1, PIBperCapita1);
    
    printf("Dados da Segunda Carta:\n");
    printf("Estado: %s\nCodigo: %s\nNome: %s\nPopulacao: %d\nArea: %.2f\nPIB: %.2f\nPontos Turisticos: %d\nDensidade Populacional: %.2f\nPIB per capita: %.2f\n\n", 
        estado2, codigoDaCarta2, nomeDaCidade2, populacao2, areaKM2_2, PIB2, numeroDePontosTuristicos2, densidadePop2, PIBperCapita2);
    
    // Comparação - Escolha do atributo para comparação (por exemplo, População)
    printf("Comparacao de cartas (Atributo: Populacao):\n");
    printf("Carta 1 - %s (%s): %d\n", nomeDaCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", nomeDaCidade2, estado2, populacao2);
    
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeDaCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeDaCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    
    return 0;
}
