#include <stdio.h>

int main() {
    // Carta 1
    char estado1;("pernmabuco");
    char codigo1[4];("A01");
    char nomeCidade1[50];("Recife");
    int populacao1;("120.000.000");
    float area1;("10000.0");
    float pib1;("24.0");
    int pontosTuristicos1;("20");
    printf("Digite o estado da carta 1: ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta 1: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade da carta 1: ");
    scanf("%s", nomeCidade1);
    printf("Digite a população da cidade da carta 1: ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade da carta 1 (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade da carta 1 (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade da carta 1: ");
    scanf("%d", &pontosTuristicos1);

    float densidadePopulacional1 = (float) populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Carta 2
    char estado2;("Ceara");
    char codigo2[4];("A02");
    char nomeCidade2[50];("Fortaleza");
    int populacao2;("11000.000");
    float area2;("11000.0");
    float pib2;("30.0");
    int pontosTuristicos2;("15");

    printf("Digite o estado da carta 2: ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta 2: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", nomeCidade2);
    printf("Digite a população da cidade da carta 2: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade da carta 2 (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade da carta 2 (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade da carta 2: ");
    scanf("%d", &pontosTuristicos2);

    float densidadePopulacional2 = (float) populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibir informações das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);

    return 0;
}

