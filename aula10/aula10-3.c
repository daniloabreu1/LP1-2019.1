#include <stdio.h>
int pow(int base, int exp){
    if(exp==0){
        return 1;
    }else{
        return base*pow(base,exp-1);
    }
}
main(){
    int b,e;
    printf("Digite a Base: ");
    scanf("%d",&b);
    printf("Digite a Expoente: ");
    scanf("%d",&e);
    printf("%d\n",pow(b,e));
}
