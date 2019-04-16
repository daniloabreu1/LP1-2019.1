#include <stdio.h>
main(){
    int *p= NULL, x=5;
    p=&x;
    printf("%d\n",x);
    printf("%p\n",&x);
    printf("%p\n",p);
    printf("%d\n",*p);
    printf("%p\n",&p);
    x=10;
    printf("%d\n",x);
    printf("%p\n",p);
    printf("%d\n",*p);
    *p=34;
    printf("%d\n",x);
}
