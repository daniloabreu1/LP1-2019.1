#include <stdio.h>
#include <string.h>
main(){
    char nome1[6]="maria";
    char nome2[6]="MARIO";
    strupr(nome1);
    strlwr(nome2);
    puts(nome1);
    puts(nome2);
}
