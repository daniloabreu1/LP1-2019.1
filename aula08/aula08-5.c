#include <stdio.h>
#define D 2
void imprimir(int v[D]){
    int i;
    for(i=0;i<D;i++){
        printf("%d ",v[i]);
    }
    putchar('\n');
}
void atribuir(int x[D]){
    int i;
    for(i=0;i<D;i++){
        scanf("%d",&x[i]);
    }
}
void somar(int va[D],int vb[D],int vc[D]){
    int i;
    for(i=0;i<D;i++){
        vc[i]=va[i]+vb[i];
    }
}
void sub(int va[D],int vb[D],int vc[D]){
    int i;
    for(i=0;i<D;i++){
        vc[i]=va[i]-vb[i];
    }
}

main(){
    int a[D],b[D],c[D];
    printf("Digite o vetor A\n");
    atribuir(a);
    printf("Digite o vetor B\n");
    atribuir(b);
    somar(a,b,c);
    printf("\nVetor A\n");
    imprimir(a);
    printf("\nVetor B\n");
    imprimir(b);
    printf("\nA Soma de A e B\n");
    imprimir(c);
    printf("\nA Subtracao de A e B\n");
    sub(a,b,c);
    imprimir(c);
}
