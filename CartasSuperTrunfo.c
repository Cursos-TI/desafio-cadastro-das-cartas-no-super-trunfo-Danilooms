#include <stdio.h>

int main() {
    // Dados da Carta 1 – Fortaleza
    char estado1 = 'B';
    char codigo1[] = "B01";                             
    char nome1[] = "Fortaleza";
    int populacao1 = 2686612;
    float area1 = 312.35;
    float pib1 = 67.03;
    int pontos1 = 30;

    // Dados da Carta 2 – São Paulo
    char estado2 = 'A';
    char codigo2[] = "A01";
    char nome2[] = "São Paulo";
    int populacao2 = 12325000;
    float area2 = 1521.11;
    float pib2 = 699.28;
    int pontos2 = 50;

    // Imprimir carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n\n", pontos1);

    // Imprimir carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);

    return 0;
}
