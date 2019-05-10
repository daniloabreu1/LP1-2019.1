//Alocar Strings
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* getPalavra(){
    char c,*str;
    int i = 0;
    str = (char *) malloc(sizeof(char));
    printf("Digite a string: ");
    while ((c = getchar()) != '\n'){
        *(str + i) = c;
        str = (char *) realloc(str, strlen(str)+ 1);
        i++;
    }
    *(str + i) = '\0';
    return str;
}
main(){
    char *texto;
    texto=getPalavra();
    puts(texto);
    printf("%d",strlen(texto));
}
