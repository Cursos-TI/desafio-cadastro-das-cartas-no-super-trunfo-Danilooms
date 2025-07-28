#include <stdio.h>

int main()
{
    // Dados da primeira carta
    // Estado, Código, Nome da Cidade, População, Área, PIB e Pontos
    char estado1 = 'B';
    char codigo1[10] = "B01";
    char nome1[50] = "Fortaleza";
    int populacao1 = 2686612;
    float area1 = 312.35;
    float pib1 = 67.03;
    int pontos1 = 30;

    //Dados da segunda carta
    // Estado, Código, Nome da Cidade, População, Área, PIB e Pontos

    char estado2 = 'A';
    char codigo2[10] = "A01";
    char nome2[50] = "São Paulo";
    int populacao2 = 12325000;
    float area2 = 1521.11;
    float pib2 = 699.28;
    int pontos2 = 50;

    float Densidade1 = populacao1 / area1;
    float Densidade2 = populacao2 / area2;

    printf("CARTA 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("A Densidade é: %.2f\n\n", Densidade1);

    printf("CARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("A Densidade é: %.2f\n", Densidade2);

    return 0;
}

