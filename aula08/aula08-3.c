#include <stdio.h>
void imprimir(int vet[3],int t){
    int i;
    printf("\n");
    for(i=0;i<t;i++){
        printf(" %d ",vet[i]);
        }
    printf("\n");
}
main(){
    int v[3]={3,5,6},i;
    imprimir(v,3);

     for(i=0;i<3;i++){
        printf("digite um novo valor ");
        scanf("%d",&v[i]);
        }
        imprimir(v,3);

    }
