#include <stdio.h>
main(){
    int v[3]={3,5,6},i;
    for(i=0;i<3;i++){
        printf("%d ",v[i]);
    }
    printf("\n");

     for(i=0;i<3;i++){
        printf("digite um novo valor");
        scanf("%d",&v[i]);
    }
     for(i=0;i<3;i++){
        printf("%d ",v[i]);
    }
}
