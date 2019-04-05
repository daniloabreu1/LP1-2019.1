#include <stdio.h>
main(){
    char nome[8];
    printf("Digite um nome: ");
    fgets(nome,sizeof(nome),stdin);
    puts(nome);
}
