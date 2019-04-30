#include <stdio.h>
struct dataNasc{
    int dia, mes, ano;
};
main(){
    struct dataNasc d1;
    printf("Digite o dia: ");
    scanf("%d",&d1.dia);
    printf("Digite o mes: ");
    scanf("%d",&d1.mes);
    printf("Digite o ano: ");
    scanf("%d",&d1.ano);
    printf("%02d/%02d/%00004d",d1.dia,d1.mes,d1.ano);
}
