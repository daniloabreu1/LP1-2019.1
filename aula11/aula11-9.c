#include <stdio.h>
#include <string.h>
main(){
    char nome[12]="maria ";
    puts(nome);
    printf("%d\n",strlen(nome));
    strcat(nome,"silva");
    puts(nome);
    printf("%d\n",strlen(nome));
}
