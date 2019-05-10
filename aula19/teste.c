#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int** matriz(int l,int c)
{
    int i,j;
    int **m = (int**)malloc(l * sizeof(int*));
    for (i = 0; i < l; i++)
    {
        m[i] = (int*) calloc(c, sizeof(int));
    }
    return m;
}
void press(int **p,int l, int c)
{
    int i,j;
    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",p[i][j]);
        }
        putchar('\n');
    }
}
typedef struct
{
    char nome[25],cpf[14];
} PESSOA;

PESSOA** vetP(int l,int c)
{
    int i,j;
    PESSOA **m = (PESSOA**)malloc(l * sizeof(PESSOA*));
    for (i = 0; i < l; i++)
    {
        m[i] = (PESSOA*) malloc(c * sizeof(PESSOA));
    }
    return m;
}
void nomes(PESSOA **pe,int l, int c)
{
    int i,j;
    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
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

void imprimir(PESSOA **pe,int l, int c)
{
    int i,j;
    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%s >> %s\n",pe[i][j].nome,pe[i][j].cpf);
        }
    }
}
char* getPalavra()
{
    char c,*str;
    int i = 0;
    str = (char *) malloc(sizeof(char));
    printf("Digite a string: ");
    while ((c = getchar()) != '\n')
    {

        *(str + i) = c;
        str = (char *) realloc(str, strlen(str)+ 1);
        i++;
    }
    *(str + i) = '\0';
    return str;
}
main()
{
    int linhas, colunas,**p;
    char *str;
    printf("Digite as linhas e as colunas da matriz: ");
    scanf("%d %d",&linhas,&colunas);
    p=matriz(linhas,colunas);
    press(p,linhas, colunas);
    PESSOA **pe;
    pe=vetP(linhas,colunas);
    nomes(pe,linhas,colunas);
    imprimir(pe,linhas,colunas);
    str=getPalavra();
    puts(str);
    free(p);
    free(pe);
    free(str);
}
