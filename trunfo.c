#include <stdio.h>

struct Carta {
    char estado;        // apenas uma letra
    char codigo[4];     // ex: A01
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    struct Carta carta1, carta2;
    int numero;

    printf("Cadastro de Cartas do Jogo Trunfo =====================================\n");

    printf("=== Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Codigo da Carta (01 a 04): ");
    scanf("%d", &numero);
    sprintf(carta1.codigo, "%c%02d", carta1.estado, numero);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", carta1.cidade); 

    printf("Populacao da cidade: ");
    scanf("%d", &carta1.populacao);

    printf("Area da cidade (km2): ");
    scanf("%f", &carta1.area);

    printf("PIB da cidade (em bilhoes): ");
    scanf("%f", &carta1.pib);

    printf("Pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    printf("\n=== Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Codigo da Carta (01 a 04): ");
    scanf("%d", &numero);
    sprintf(carta2.codigo, "%c%02d", carta2.estado, numero);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", carta2.cidade);  // lê linha inteira

    printf("Populacao da cidade: ");
    scanf("%d", &carta2.populacao);

    printf("Area da cidade (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB da cidade (em bilhoes): ");
    scanf("%f", &carta2.pib);

    printf("Pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);


    // Exibir as cartas
    printf("\nCartas cadastradas =====================================\n");

    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km2\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Pontos turisticos: %d\n", carta1.pontosTuristicos);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km2\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos turisticos: %d\n", carta2.pontosTuristicos);

    return 0;
}