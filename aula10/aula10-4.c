#include <stdio.h>
int fibonacci(int f){
    if(f<2){
        return f;
    }else{
        return fibonacci(f-1)+fibonacci(f-2);
    }
}
int somatorio(int n){
    if(n==0){
        return 0;
    }else{
        return fibonacci(n)+somatorio(n-1);
    }
}
main(){
    int n;
    printf("Digite um Numero Natural: ");
    scanf("%d",&n);
    printf("%d\n",somatorio(n));
}
