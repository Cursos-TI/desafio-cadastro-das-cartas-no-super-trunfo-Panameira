#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados de duas cartas
    char estado1, estado2; 
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    // Entrada de dados para a primeira carta
    printf("Digite os dados da Carta 1:\n");
    
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);  // O espaço antes de %c é necessário para capturar o caractere corretamente.
    
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", cidade1);  // Essa sintaxe permite ler nomes com espaços.
    
    printf("Populacao: ");
    scanf("%d", &populacao1);
    
    printf("Area em km²: ");
    scanf("%f", &area1);
    
    printf("PIB em bilhões de reais: ");
    scanf("%f", &pib1);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Entrada de dados para a segunda carta
    printf("\nDigite os dados da Carta 2:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);  // O espaço antes de %c é necessário para capturar o caractere corretamente.
    
    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", cidade2);  // Essa sintaxe permite ler nomes com espaços.
    
    printf("Populacao: ");
    scanf("%d", &populacao2);
    
    printf("Area em km²: ");
    scanf("%f", &area2);
    
    printf("PIB em bilhões de reais: ");
    scanf("%f", &pib2);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Exibição das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;
}
