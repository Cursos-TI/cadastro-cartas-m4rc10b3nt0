#include <stdio.h>

int main() {

    // ===========================
    // Variáveis da Carta 1
    // ===========================
    char estado1[2], codigodacarta1[4], nomedacidade1[50];
    unsigned long int populacao1;
    int numerodepontosturisticos1;
    float area1, pib1, densidade1, pibpercapita1, superpoder1;

    // ===========================
    // Variáveis da Carta 2
    // ===========================
    char estado2[2], codigodacarta2[4], nomedacidade2[50];
    unsigned long int populacao2;
    int numerodepontosturisticos2;
    float area2, pib2, densidade2, pibpercapita2, superpoder2;

    // ===========================
    // Entrada Carta 1
    // ===========================
    printf("===== CARTA 1 =====\n");

    printf("Digite uma letra de 'A' a 'H': ");
    scanf("%s", estado1);

    printf("Digite a letra do estado seguida de um número de 01 a 04: ");
    scanf("%s", codigodacarta1);

    getchar();

    printf("Digite o nome da cidade: ");
    fgets(nomedacidade1, 50, stdin);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &numerodepontosturisticos1);

    // ===========================
    // Entrada Carta 2
    // ===========================
    printf("\n===== CARTA 2 =====\n");

    printf("Digite uma letra de 'A' a 'H': ");
    scanf("%s", estado2);

    printf("Digite a letra do estado seguida de um número de 01 a 04: ");
    scanf("%s", codigodacarta2);

    getchar();

    printf("Digite o nome da cidade: ");
    fgets(nomedacidade2, 50, stdin);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &numerodepontosturisticos2);

    // ===========================
    // Cálculos Carta 1
    // ===========================
    densidade1 = populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000.0) / populacao1;

    superpoder1 = populacao1 + area1 + pib1 + numerodepontosturisticos1 + pibpercapita1 + (1 / densidade1);

    // ===========================
    // Cálculos Carta 2
    // ===========================
    densidade2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000.0) / populacao2;

    superpoder2 = populacao2 + area2 + pib2 + numerodepontosturisticos2 + pibpercapita2 + (1 / densidade2);

    // ===========================
    // Exibição Carta 1
    // ===========================
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigodacarta1);
    printf("Nome da Cidade: %s", nomedacidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    // ===========================
    // Exibição Carta 2
    // ===========================
    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigodacarta2);
    printf("Nome da Cidade: %s", nomedacidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    // ===========================
    // Comparações
    // ===========================
    printf("\n===== COMPARAÇÃO =====\n");

    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", numerodepontosturisticos1 > numerodepontosturisticos2);
    printf("Densidade Populacional: %d\n", densidade1 < densidade2);
    printf("PIB per Capita: %d\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: %d\n", superpoder1 > superpoder2);

    return 0;
}
