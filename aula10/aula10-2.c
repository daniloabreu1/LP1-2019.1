#include <stdio.h>
int somatorio(int n){
    if(n==0){
        return 0;
    }else{
        return n+somatorio(n-1);
    }
}
main(){
    int n;
    printf("Digite um Numero Natural: ");
    scanf("%d",&n);
    printf("Somatorio de 0 a %d = %d\n",n,somatorio(n));
}
