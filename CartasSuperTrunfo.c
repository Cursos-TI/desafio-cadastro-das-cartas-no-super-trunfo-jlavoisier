#include <stdio.h>

int main() {
    // Carta 1
    char estado1;("Pernambuco");
    char codigo1[4];("A01");
    char nomeCidade1[50];("Recife");
    int populacao1;("120.000,000");
    float area1;("10.000.000 km²");
    float pib1;("24.000.000");
    int pontosTuristicos1;("20");

    printf("Digite o estado da carta 1 (A01): \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta 1 (A01): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da carta 1: \n");
    scanf("%s", nomeCidade1);

    printf("Digite a população da cidade da carta 1: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade da carta 1 (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da carta 1 (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade da carta 1: \n");
    scanf("%d", &pontosTuristicos1);

    // Carta 2
    char estado2;("ceara");
    char codigo2[4];("A02");
    char nomeCidade2[50];("Fortaleza");
    int populacao2;("110.000.000");
    float area2;("11.000.000km²");
    float pib2;("30.000.000");
    int pontosTuristicos2;("15");

    printf("Digite o estado da carta 2 (A02): \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta 2 (A02): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da carta 2: \n");
    scanf("%s", nomeCidade2);

    printf("Digite a população da cidade da carta 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade da carta 2 (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da carta 2 (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade da carta 2: \n");
    scanf("%d", &pontosTuristicos2);

     
   
    return 0;
}