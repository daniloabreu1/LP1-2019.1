#include <stdio.h>
int fat(int n){
    if(n==0){
        return 1;
    }else{
        return n*fat(n-1);
    }
}
main(){
    int n;
    printf("Digite um Numero Natural: ");
    scanf("%d",&n);
    if(n>0){
        printf("Fatorial de %d = %d\n",n,fat(n));
    }
}
