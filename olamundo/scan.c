#include <stdio.h>

int main(){
    int idade;
    float altura;
    char opcao;
    char nome[20];

    printf("digite a sua idade: ");
    scanf("%d", &idade);
    printf("a idade é: %d\n", idade);

    printf("digite a sua altura: ");
    scanf("%f", &altura);
    printf("a altura é: %f\n", altura);

    printf("digite seu nome: ");
    scanf("%s", nome);
    printf("o nome é: %s\n", nome);

    printf("digite a opcao: ");
    scanf(" %c", &opcao);
    printf("a opcao é: %c\n", opcao);

}