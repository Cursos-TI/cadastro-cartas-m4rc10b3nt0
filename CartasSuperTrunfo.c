#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado[2], codigodacarta[4], nomedacidade[50];
    int populacao, numerodepontosturisticos;
    float area, pib;

  // Área para entrada de dados
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf("%s", estado);

    printf("Digite a letra do estado seguida de um número de 01 a 04: ");
    scanf("%s", codigodacarta);

    getchar(); // limpa o ENTER pendente

    printf("Digite o nome da cidade: ");
    fgets(nomedacidade, 50, stdin);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);
    
    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &numerodepontosturisticos);

  // Área para exibição dos dados da cidade
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigodacarta);
    printf("Nome da Cidade: %s", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Número de Pontos Turísticos: %d", numerodepontosturisticos);
    
return 0;
} 
