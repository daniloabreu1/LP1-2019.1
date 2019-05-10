//Alocar vetores structs
#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char nome[25],cpf[15];
}PESSOA;

PESSOA** vetPessoa(int lin,int col){
    int i;
    PESSOA **m = (PESSOA**)malloc(lin * sizeof(PESSOA*));
    for (i = 0; i < lin; i++)
    {
        m[i] = (PESSOA*) malloc(col * sizeof(PESSOA));
    }
    return m;
}
void salvarNomes(PESSOA **pe,int lin, int col){
    int i,j;
    for(i=0; i<lin; i++)
    {
        for(j=0; j<col; j++)
        {
            setbuf(stdin,NULL);
            printf("Digite o nome: ");
            gets(pe[i][j].nome);
            setbuf(stdin,NULL);
            printf("Digite o cpf: ");
            gets(pe[i][j].cpf);
            putchar('\n');
        }

    }
}

void imprimir(PESSOA **pe,int lin, int col){
    int i,j;
    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
            printf("%s >> %s\n",pe[i][j].nome,pe[i][j].cpf);
        }
    }
}
main(){
    PESSOA **p=NULL;
    int n,m;
    printf("Digite as dimensoes da matriz ");
    scanf("%d %d",&m,&n);
    p=vetPessoa(m,n);
    salvarNomes(p,m,n);
    imprimir(p,m,n);
}
