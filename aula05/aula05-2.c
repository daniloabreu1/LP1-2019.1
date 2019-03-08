#include <stdio.h>
main(){
   int n,s=0,p=0;
   for(n=0;n<100;n++){
        if(n%2==0){
            s+=n;
        }
   }
   printf("O SOMATORIO DOS PRIMEIROS NUMEROS PARES %d\n",s);
}
