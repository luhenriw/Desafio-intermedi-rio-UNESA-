#include <stdio.h>

int main (){
    char nome[20];
    char banda[30];
    char album[50];

    printf("digite seu nome: \n");
    scanf("%s", &nome);

    printf("sua banda do momento: \n");
    scanf("%s", &banda);

    printf("album do momento: \n");
    scanf("%s", &album);

    printf("Nome: %s \n Banda: %s \n Álbum: %s \n", nome, banda, album);

    return 0;

}