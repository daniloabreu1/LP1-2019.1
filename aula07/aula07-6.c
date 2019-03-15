#include <stdio.h>
int somar(int x,int y);
void imprimirLinha(int n);
main(){
    int a,b;
    printf("Digite dois valores a serem somados ");
    scanf("%d %d",&a,&b);
    imprimirLinha(5);
    printf("%d\n",somar(a,b));
}
int somar(int x,int y){
    return x+y;
}
void imprimirLinha(int n){
    int i;
    for(i=0;i<n;i++){
        printf("_______________\n");
    }
}
