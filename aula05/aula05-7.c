#include <stdio.h>
main(){
    float s=1,n,i,j,f;
    printf("DIGITE UM NUMERO INTEIRO POSITIVO ");
    scanf("%f",&n);
    for(i=1;i<n;i++){
            f=1;
            for(j=1;j<=i;j++){
                f*=j;
            }
        s+=1/f;
    }
    printf("%f\n",s);
}
