#include <stdio.h>

int main() {
    char estado[50]; 
    char codigo[50]; 
    char cidade[50]; 
    int populacao; 
    float area; 
    float pib; 
    int pontos; 

    printf("Digite seu estado: \n");
    scanf("%s", estado);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    printf("Digite a sua cidade: \n");
    scanf("%s", cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos);

    printf("\n--- DADOS DA CARTA ---\n");
    printf("Estado: %s \nCódigo: %s \n", estado, codigo);
    printf("Cidade: %s \nPopulação: %d \n", cidade, populacao);
    printf("Área: %.2f \nPIB: %.2f \n", area, pib);
    printf("Número de pontos turísticos: %d \n", pontos);

    return 0;
}