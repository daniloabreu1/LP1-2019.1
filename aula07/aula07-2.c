#include <stdio.h>
imprimirLinha(){
    printf("________\n");
}
main(){
    int i,n;
    printf("Digite a quantidade linhas ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        imprimirLinha();
    }
}
