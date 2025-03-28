#include <stdio.h>

int main() {
    // Armazenar os dados das cartas.
    char estado1[50], estado2[50];
    char codigo1[50], codigo2[50];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    //Dados da primeira carta.
    printf("\n--- Digite os dados da carta 1 ---\n");
    printf("Estado: \n");
    scanf("%s", estado1);
    printf("Código: \n");
    scanf("%s", codigo1);
    printf("Cidade: \n");
    scanf("%s", cidade1);
    printf("População: \n");
    scanf("%d", &populacao1);
    printf("Área: \n");
    scanf("%f", &area1);
    printf("PIB: \n");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontos1);

    //Dados da segunda carta.
    printf("\n--- Digite os dados da carta 2 ---\n");
    printf("Estado: \n");
    scanf("%s", estado2);
    printf("Código: \n");
    scanf("%s", codigo2);
    printf("Cidade: \n");
    scanf("%s", cidade2);
    printf("População: \n");
    scanf("%d", &populacao2);
    printf("Área: \n");
    scanf("%f", &area2);
    printf("PIB: \n");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontos2);

    // cálculo carta 1
    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    // cálculo carta 2
    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // resultados
    printf("\n--- DADOS DA CARTA 1 ---\n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %.2d milhões \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f milhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per Capita: %.2f reais \n", pib_per_capita1);

    printf("\n--- DADOS DA CARTA 2 ---\n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %.2d milhões \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f milhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", pib_per_capita2);

    return 0;
}