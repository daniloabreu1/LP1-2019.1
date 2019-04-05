#include <stdio.h>
#include <string.h>
void pegar(char n[10]){
    fgets(n,10,stdin);
}

main(){
    char nome[10];
    pegar(nome);
    puts(nome);
}
