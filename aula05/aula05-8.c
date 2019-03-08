#include <stdio.h>
#include <math.h>
main(){
    int min,max,soma=0;
    printf("Digite o valor minimo e maximo do intervalo ");
    scanf("%d %d",&min,&max);
    if(min>max){
        printf("Intervalo de Valores Invalidos\n");
    }else{
        while(min<=max){
            if(min%2==1){
                soma+=min;
            }
            min++;
        }
        printf("A Soma dos impares neste intervalo: %d", soma);
    }
}
