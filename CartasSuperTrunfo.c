#include <stdio.h>

 int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    
    //Entrada de Dados
    
    char codigo[10];
    char nome[50];
    int populacao;
    float area;
    float PIB;
    int PontosTuristicos;
    

    // Cadastro das Cartas:

    printf("Digite o codigo da cidade: ");
    scanf("%s", &codigo);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", &nome);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Qual a Area da cidade (em km)");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &PontosTuristicos);

    return 0;
 }