#include <stdio.h>
#include <stdlib.h>
int* alocacao(int n){
    return (int*)malloc(n*sizeof(int));
}
void salvar(int *p, int n){
    int i;
    for(i=0;i<n;i++){
        printf("Valor: ");
        scanf("%d",&p[i]);
    }
}
void imprimir(int *p, int n){
    int i;
    putchar('\n');
    for(i=0;i<n;i++){
        printf("%d ",p[i]);
    }
    putchar('\n');
}
main(){
    int n,*p = NULL;
    scanf("%d",&n);
    p=alocacao(n);
    if(p==NULL){
        printf("nao alocou\n");
    }else{
        printf("alocou\n");
        imprimir(p,n);
        salvar(p,n);
        imprimir(p,n);
    }
}
