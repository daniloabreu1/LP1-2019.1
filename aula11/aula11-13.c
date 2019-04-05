#include <stdio.h>
#include <string.h>
main(){
    char nomes[4][10];
    int i;
    for(i=0;i<4;i++){
        gets(nomes[i]);
    }
    putchar('\n');
    for(i=0;i<4;i++){
        printf("%s\n",nomes[i]);
    }
}
