#include <stdio.h>
typedef int inteiro;

struct dataNasc{
    inteiro dia, mes, ano;
};
void imprimir(struct dataNasc d1){
    printf("\n%02d/%02d/%00004d\n",d1.dia,d1.mes,d1.ano);
}
main(){
    struct dataNasc d1;
    printf("Digite o dia: ");
    scanf("%d",&d1.dia);
    printf("Digite o mes: ");
    scanf("%d",&d1.mes);
    printf("Digite o ano: ");
    scanf("%d",&d1.ano);
    imprimir(d1);
}
