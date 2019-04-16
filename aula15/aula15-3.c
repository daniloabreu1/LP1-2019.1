#include <stdio.h>
void f(int *px){
    scanf("%d",px);
}

main(){
    int x=3;
    printf("%d\n",x);
    f(&x);
    printf("%d\n",x);
}
