#include <stdio.h>
int somar(int x,int y){
    return x+y;
}
main(){
    int a,b;
    printf("Digite dois valores a serem somados ");
    scanf("%d %d",&a,&b);
    printf("%d\n",somar(a,b));
}
