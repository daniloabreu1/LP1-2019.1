#include <stdio.h>
main(){
    int f=1,n,i;
    printf("DIGITE UM NUMERO INTEIRO POSITIVO ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f*=i;
    }
    printf("%d\n",f);
}
