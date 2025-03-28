#include <stdio.h>

int main(){
    char estado;
    char codigo [50];
    char cidade;
    int populacao;
    float area;
    float pib;
    int pontos;

    printf("digite seu estado: \n");
    scanf("%s", &estado);

    printf("digite o código da carta: \n");
    scanf("%d", &codigo);

    printf("digite a sua cidade: \n");
    scanf("%s", &cidade);

    printf("digite a população: \n");
    scanf("%f", &populacao);

    printf("digite a área, \n");
    scanf("%f", &area);

    printf("digite o pib: \n");
    scanf("%f", &pib);

    printf("digite o número de pontos turísticos: \n");
    scanf("%d", &pontos);

    printf("Estado: %s \n Código: %d \n", estado, codigo);
    printf("Cidade: %s \n População: %d \n", cidade, populacao);
    printf("Área: %f \n PIB: %f \n", area, pib);
    printf("Número de pontos turísticos: %d \n", pontos);

    return 0;

}