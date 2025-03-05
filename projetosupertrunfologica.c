#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis para a primeira cidade
    char nome1[50];
    int populacao1, pturisticos1;
    float km1, pib1, denpopulacional1;

    // Variáveis para a segunda cidade
    char nome2[50];
    int populacao2, pturisticos2;
    float km2, pib2, denpopulacional2;

    // Cadastro da primeira cidade
    printf("Digite o nome da primeira cidade: \n");
    scanf("%s", nome1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): \n");
    scanf("%f", &km1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pturisticos1);

    // Cálculo da densidade populacional para a primeira cidade
    denpopulacional1 = populacao1 / km1;

    // Cadastro da segunda cidade
    printf("Digite o nome da segunda cidade: \n");
    scanf("%s", nome2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): \n");
    scanf("%f", &km2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pturisticos2);

    // Cálculo da densidade populacional para a segunda cidade
    denpopulacional2 = populacao2 / km2;

    // Exibição dos dados das cidades
    printf("\nDados da primeira cidade:\n");
    printf("Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", km1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pturisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", denpopulacional1);

    printf("\nDados da segunda cidade:\n");
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", km2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pturisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", denpopulacional2);

    // Menu interativo para escolha dos atributos
    int atributo1, atributo2;
    float valor1_atributo1, valor1_atributo2, valor2_atributo1, valor2_atributo2;

    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Digite o número da opção: ");
    scanf("%d", &atributo1);

    printf("\nEscolha o segundo atributo para comparação (diferente do primeiro):\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Digite o número da opção: ");
    scanf("%d", &atributo2);

    // Validação para garantir que os atributos sejam diferentes
    if (atributo1 == atributo2) {
        printf("Erro: Os atributos devem ser diferentes. Reinicie o programa.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Atribuição dos valores dos atributos escolhidos
    switch (atributo1) {
        case 1:
            valor1_atributo1 = populacao1;
            valor2_atributo1 = populacao2;
            break;
        case 2:
            valor1_atributo1 = km1;
            valor2_atributo1 = km2;
            break;
        case 3:
            valor1_atributo1 = pib1;
            valor2_atributo1 = pib2;
            break;
        case 4:
            valor1_atributo1 = pturisticos1;
            valor2_atributo1 = pturisticos2;
            break;
        case 5:
            valor1_atributo1 = denpopulacional1;
            valor2_atributo1 = denpopulacional2;
            break;
        default:
            printf("Opção inválida para o primeiro atributo.\n");
            return 1;
    }

    switch (atributo2) {
        case 1:
            valor1_atributo2 = populacao1;
            valor2_atributo2 = populacao2;
            break;
        case 2:
            valor1_atributo2 = km1;
            valor2_atributo2 = km2;
            break;
        case 3:
            valor1_atributo2 = pib1;
            valor2_atributo2 = pib2;
            break;
        case 4:
            valor1_atributo2 = pturisticos1;
            valor2_atributo2 = pturisticos2;
            break;
        case 5:
            valor1_atributo2 = denpopulacional1;
            valor2_atributo2 = denpopulacional2;
            break;
        default:
            printf("Opção inválida para o segundo atributo.\n");
            return 1;
    }

    // Comparação dos atributos
    int pontos_cidade1 = 0, pontos_cidade2 = 0;

    // Comparação do primeiro atributo
    if (atributo1 == 5) { // Densidade demográfica (menor valor vence)
        if (valor1_atributo1 < valor2_atributo1) pontos_cidade1++;
        else if (valor1_atributo1 > valor2_atributo1) pontos_cidade2++;
    } else { // Outros atributos (maior valor vence)
        if (valor1_atributo1 > valor2_atributo1) pontos_cidade1++;
        else if (valor1_atributo1 < valor2_atributo1) pontos_cidade2++;
    }

    // Comparação do segundo atributo
    if (atributo2 == 5) { // Densidade demográfica (menor valor vence)
        if (valor1_atributo2 < valor2_atributo2) pontos_cidade1++;
        else if (valor1_atributo2 > valor2_atributo2) pontos_cidade2++;
    } else { // Outros atributos (maior valor vence)
        if (valor1_atributo2 > valor2_atributo2) pontos_cidade1++;
        else if (valor1_atributo2 < valor2_atributo2) pontos_cidade2++;
    }

    // Soma dos atributos para cada cidade
    float soma_cidade1 = valor1_atributo1 + valor1_atributo2;
    float soma_cidade2 = valor2_atributo1 + valor2_atributo2;

    // Exibição dos resultados
    printf("\nResultados da comparação:\n");
    printf("Cidade 1 - %s: %d pontos\n", nome1, pontos_cidade1);
    printf("Cidade 2 - %s: %d pontos\n", nome2, pontos_cidade2);

    if (pontos_cidade1 > pontos_cidade2) {
        printf("Resultado final: %s venceu!\n", nome1);
    } else if (pontos_cidade1 < pontos_cidade2) {
        printf("Resultado final: %s venceu!\n", nome2);
    } else {
        printf("Resultado final: Empate!\n");
    }

    return 0;
}
