//Alocar structs
#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char nome[25],cpf[15];
}PESSOA;

PESSOA* criar(int qtd){
    return (PESSOA*)malloc(sizeof(PESSOA)*qtd);
}
void imprimir(PESSOA *p,int n){
    int i;
    system("cls");
    for(i=0;i<n;i++){
        printf("NOME: %s\n",p[i].nome);
        printf("CPF: %s\n\n",p[i].cpf);
    }
}
void salvar(PESSOA *p,int n){
    int i;
    for(i=0;i<n;i++){
        setbuf(stdin,NULL);
        printf("NOME: ");
        gets(p[i].nome);
        printf("CPF: ");
        setbuf(stdin,NULL);
        gets(p[i].cpf);
    }
}
main(){
    PESSOA *p=NULL;
    int n;
    printf("Digite a quantidade de pessoas ");
    scanf("%d",&n);
    p=criar(n);
    salvar(p,n);
    imprimir(p,n);
    free(p);
}
