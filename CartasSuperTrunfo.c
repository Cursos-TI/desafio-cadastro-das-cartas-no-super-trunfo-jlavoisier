#include <stdio.h>

int main() {
    // Carta 1
    char estado1;("Pernambuco");
    char codigo1[4];("A01");
    char nomeCidade1[50];("Recife");
    int populacao1;("1.587.707");
    float area1;("218000000");
    float pib1;("54,6910000");
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
    int populacao2;("2,428.678");
    float area2;("313,8000");
    float pib2;("74.000.000");
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

     // Exibir informações das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

   
    return 0;
}