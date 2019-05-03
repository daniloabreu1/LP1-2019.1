#include <stdio.h>
#include <stdlib.h>

main(){
    int n,*p = NULL;
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL){
        printf("nao alocou\n");
    }else{
        printf("alocou\n");
    }
}
