#include <stdio.h>
imprimirLinha(int n){
    int i;
    for(i=0;i<n;i++){
        printf("________\n");
    }
}
main(){
    int n;
    printf("Digite a quantidade linhas ");
    scanf("%d",&n);
    imprimirLinha(n);
}
