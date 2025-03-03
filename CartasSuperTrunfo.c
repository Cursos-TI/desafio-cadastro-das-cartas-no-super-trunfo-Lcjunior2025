#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Variáveis para a primeira cidade
    char estado1[50], codigo1[50], nome1[50];
    int populacao1, pturisticos1;
    float km1, pib1, denpopulacional1, rendpercapita1;

    // Variáveis para a segunda cidade
    char estado2[50], codigo2[50], nome2[50];
    int populacao2, pturisticos2;
    float km2, pib2, denpopulacional2, rendpercapita2;

    // Cadastro da primeira cidade
    printf("Digite seu Estado: \n");
    scanf("%s", estado1);

    printf("Digite o codigo do Estado: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome1);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao1);

    printf("Digite a Kilometragem: \n");
    scanf("%f", &km1);

    printf("Digite o Pib: \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turistico: \n");
    scanf("%d", &pturisticos1);

    // Cálculos para a primeira cidade
    denpopulacional1 = populacao1 / km1;
    rendpercapita1 = pib1 / populacao1;

    printf("Sua Densidade Populacional é de: %.2f \n", denpopulacional1);
    printf("Sua Renda Per Capita é de: %.2f \n", rendpercapita1);

    // Cadastro da segunda cidade
    printf("Digite seu Estado: \n");
    scanf("%s", estado2);

    printf("Digite o codigo do Estado: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome2);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite a Kilometragem: \n");
    scanf("%f", &km2);

    printf("Digite o Pib: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turistico: \n");
    scanf("%d", &pturisticos2);

    // Cálculos para a segunda cidade
    denpopulacional2 = populacao2 / km2;
    rendpercapita2 = pib2 / populacao2;

    printf("Sua Densidade Populacional é de: %.2f \n", denpopulacional2);
    printf("Sua Renda Per Capita é de: %.2f \n", rendpercapita2);

    // Exibição dos dados das cidades
    printf("\nDados da primeira cidade:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Kilometragem: %.2f\n", km1);
    printf("Pib: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pturisticos1);
    printf("Densidade Populacional: %.2f\n", denpopulacional1);
    printf("Renda Per Capita: %.2f\n", rendpercapita1);

    printf("\nDados da segunda cidade:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Kilometragem: %.2f\n", km2);
    printf("Pib: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pturisticos2);
    printf("Densidade Populacional: %.2f\n", denpopulacional2);
    printf("Renda Per Capita: %.2f\n", rendpercapita2);

    // Comparação das cidades com base em um atributo (População)
    printf("\nComparação de cidades (Atributo: População):\n");
    printf("Cidade 1 - %s (%s): %d\n", nome1, estado1, populacao1);
    printf("Cidade 2 - %s (%s): %d\n", nome2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Cidade 1 (%s) venceu!\n", nome1);
    } else if (populacao1 < populacao2) {
        printf("Resultado: Cidade 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado: As cidades empataram!\n");
    }

    return 0;
}

