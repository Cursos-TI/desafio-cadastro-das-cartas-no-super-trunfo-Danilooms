#include <stdio.h>

int main()
{

    char estado1 = 'B';
         char codigo1[10] = "B01";
            char nome1[50] = "Fortaleza";
                int populacao1 = 2686612;
            float area1 = 312.35;
        float pib1 = 67.03;
    int pontos1 = 30;
       


    char estado2 = 'A';
        char codigo2[10] = "A01";
            char nome2[50] = "São Paulo";
                int populacao2 = 12325000;
            float area2 = 1521.11;
        float pib2 = 699.28;
    int pontos2 = 50;

    printf("CARTA 1: Digite a inicial do Estado: %c\n ");
       printf("Estado: %c\n", estado1);
          printf("Código: %s\n", codigo1);
            printf("Nome da Cidade: %s\n", nome1);
               printf("População: %d\n", populacao1);
           printf("Área: %.2f km²\n", area1);
          printf("PIB: %.2f bilhões de reais\n", pib1);
      printf("Pontos Turísticos: %d\n", pontos1);

      printf("A Densidade é: %d\n", Densidade);  
     
      float Densidade = (float)populacao1 / area1;} {


      }
printf("CARTA 2: Digite a inicial do Estado: %c\n ");
         printf("Estado: %c\n", estado2);
           printf("Código: %s\n", codigo2);
              printf("Nome da Cidade: %s\n", nome2);
               printf("População: %d\n", populacao2);
             printf("Área: %.2f km²\n", area2);
         printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);

    printf("A Densidade é: %d\n", Densidade);  
     
      float Densidade = (float)populacao2 / area2;

    return 0;



