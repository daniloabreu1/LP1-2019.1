#include <stdio.h>
main(){
    int ant, atual, aux, n;
    printf("DIGITE A QUANTIDADE DE TERMOS ");
    scanf("%d",&n);
    ant=0;
    atual=1;
    for(;n>=-1;n--){
        aux=atual;
        atual+=ant;
        printf("%d ",ant);
        ant=aux;
    }
}
