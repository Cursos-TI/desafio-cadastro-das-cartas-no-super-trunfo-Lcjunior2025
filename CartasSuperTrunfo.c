#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado1;
    char codigo1[50];
    char nome1[50];
    int populacao1;
    float km1;
    float pib1;
    int pturisticos1;

    char estado2;
    char codigo2[50];
    char nome2[50];
    int populacao2;
    float km2;
    float pib2;
    int pturisticos2;

        printf("Digite seu Estado: \n");
        scanf("%s", &estado1);

        printf("Digite o codigo do Estado: \n");
        scanf("%s", &codigo1);

        printf("Digite o nome da cidade: \n");
        scanf("%s", &nome1);

        printf("Digite a populacao: \n");
        scanf("%d", &populacao1); 

        printf("Digite a Kilometragem: \n");
        scanf("%f", &km1 );

        printf("Digite o Pib: \n");
        scanf("%f", &pib1 );

        printf("Digite o numero de pontos turistico: \n");
        scanf("%d", &pturisticos1);

        printf("Digite seu Estado: \n");
        scanf("%s", &estado2);

        printf("Digite o codigo do Estado: \n");
        scanf("%s", &codigo2);

        printf("Digite o nome da cidade: \n");
        scanf("%s", &nome2);

        printf("Digite a populacao: \n");
        scanf("%d", &populacao2); 

        printf("Digite a Kilometragem: \n");
        scanf("%f", &km2 );

        printf("Digite o Pib: \n");
        scanf("%f", &pib2 );

        printf("Digite o numero de pontos turistico: \n");
        scanf("%d", &pturisticos2);


        printf("Estado: %s \n - Codigo: %s \n - Cidade: %s \n - Populacao: %d \n - kilometragem: %f \n - Pib: %f \n - Pontos turisticos: %d \n", estado1, codigo1, nome1, populacao1, km1, pib1 , pturisticos1);
        printf("Estado: %s \n - Codigo: %s \n - Cidade: %s \n - Populacao: %d \n - kilometragem: %f \n - Pib: %f \n - Pontos turisticos: %d \n", estado2, codigo2, nome2, populacao2, km2, pib2 , pturisticos2);       
                  
        
    return 0;
}
