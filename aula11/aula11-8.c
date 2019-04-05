#include <stdio.h>
#include <string.h>
main(){
    char nome[10];
    strcpy(nome,"maria");
    puts(nome);
    nome[2]='\0';
    int tam = strlen(nome);
    puts(nome);
    printf("%d\n",tam);
}
