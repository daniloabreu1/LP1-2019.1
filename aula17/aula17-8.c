#include <stdio.h>
typedef struct{
    int dia, mes, ano;
}DATAN;

typedef struct{
    char nome[25];
    DATAN dnasc;
}USER;

void imprimir(USER u1){
    putchar('\n');
    puts(u1.nome);
    printf("%02d/%02d/%00004d\n",u1.dnasc.dia,u1.dnasc.mes,u1.dnasc.ano);
}
void salvar(USER *u1){
    setbuf(stdin,NULL);
    printf("\nDigite o nome: ");
    fgets(u1->nome,25,stdin);
    printf("Digite o dia: ");
    scanf("%d",&u1->dnasc.dia);
    printf("Digite o mes: ");
    scanf("%d",&u1->dnasc.mes);
    printf("Digite o ano: ");
    scanf("%d",&u1->dnasc.ano);
}
main(){
    USER u1={"Ze Ninguem",{2,3,1998}};
    imprimir(u1);
    salvar(&u1);
    imprimir(u1);
}
