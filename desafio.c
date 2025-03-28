#include <stdio.h>

int main(){
    char estado[100];
    char codigo[100];
    char cidade[100];
    int populacao;
    double area, densidade;
    double pib, pib_per_capita;
    int pontos;

    printf("Digite o Estado: \n");
    scanf("%s", estado);

    printf("Digite o Código: \n");
    scanf("%s", codigo);

    printf("Digite a Cidade: \n");
    scanf("%s", cidade);

    printf("Digite a População: \n");
    scanf("%d", &populacao);

    printf("Digite a Área em km²: \n");
    scanf("%lf", &area);

    printf("PIB Total: \n");
    scanf("%lf", &pib);

    printf("Pontos turísticos: \n");
    scanf("%d", &pontos);

    densidade = populacao / area;

    pib_per_capita = pib / populacao;

    printf("\n--- DADOS DA CARTA ---\n");
    printf("Estado: %s \nCódigo: %s \n", estado, codigo);
    printf("Cidade: %.2s \nPopulação: %d milhões \n", cidade, populacao);
    printf("Área: %.2f \nPIB: %.2f milhões de reais \n", area, pib);
    printf("Número de pontos turísticos: %d \n", pontos);
    printf("Densidade populacional: %.2f hab/km² \n", densidade);
    printf("PIB per capita: %.2f \n", pib_per_capita);

    return 0;
}