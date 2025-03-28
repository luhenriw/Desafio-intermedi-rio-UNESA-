#include <stdio.h>

int main(){
    int idade;
    int matricula;
    float altura;
    char nome[50];

    printf("digite a sua idade: \n");
    scanf("%d", &idade);

    printf("digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("digite sua altura: \n");
    scanf("%f", &altura);

    printf("digite seu nome: \n");
    scanf("%s", &nome);

    printf("Idade do aluno:%d - Matrícula: %d\n", idade, matricula);
    printf("Altura: %f - Nome: %s\n", altura, nome);

    return 0;

}