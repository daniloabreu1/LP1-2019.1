#include <stdio.h>
#include <math.h>
main(){
    int a,b,c;
    a=b=0;
    do{
       a++;
       b++;
       c=(int)sqrt(pow(a,2)+pow(b,2));
       printf("%d + %d + %d = %d\n",a,b,c,a+b+c);
    }while(a+b+c!=1000);
}
