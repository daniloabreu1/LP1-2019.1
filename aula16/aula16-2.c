#include <stdio.h>
void f(int *p, int t){
    int i;
    for(i=0;i<t;i++){
       printf("%d ",*(p++));
    }
}
main(){
    int v[3]={16, 21, 3};
    f(v,3);
}
