#include <stdio.h>
main(){
    float f=0,n,i;
    printf("DIGITE UM NUMERO INTEIRO POSITIVO ");
    scanf("%f",&n);
    for(i=1;i<=n;i++){
        f+=1/i;
    }
    printf("%f\n",f);
}
