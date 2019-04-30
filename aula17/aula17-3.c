#include <stdio.h>
struct dataNasc{
    int dia, mes, ano;
}d1;
void imprimir(){
    printf("\n%02d/%02d/%00004d\n",d1.dia,d1.mes,d1.ano);
}
main(){
    printf("Digite o dia: ");
    scanf("%d",&d1.dia);
    printf("Digite o mes: ");
    scanf("%d",&d1.mes);
    printf("Digite o ano: ");
    scanf("%d",&d1.ano);
    imprimir();
}
