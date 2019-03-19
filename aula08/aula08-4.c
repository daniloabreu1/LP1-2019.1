#include <stdio.h>
void imprimir(int vet[3],int t){
    int i;
    printf("\n");
    for(i=0;i<t;i++){
        printf(" %d ",vet[i]);
        }
    printf("\n");
}
void alterar(int vet[3], int t){
    int i;
    printf("\n");
    for(i=0;i<t;i++){
        printf("numero ");
        scanf("%d",&vet[i]);
        }
}
main(){
    int v[3]={3,5,6},i;
    imprimir(v,3);
    alterar(v,3);
    imprimir(v,3);

    }
