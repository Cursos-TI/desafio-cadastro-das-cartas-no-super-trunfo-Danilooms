#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

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

    printf()
    
    
    
    
    
    
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
