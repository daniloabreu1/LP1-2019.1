//Alocar matrizes
#include <stdio.h>
#include <stdlib.h>
int** matriz(int lin,int col){
    int i,**m;
    m=(int**)malloc(sizeof(int*)*lin);
    for(i=0;i<lin;i++){
        m[i]=(int*)calloc(col,sizeof(int));
    }
    return m;
}
void press(int **m,int lin, int col){
    int i,j;
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            printf("%d ",m[i][j]);
        }
        putchar('\n');
    }
}
void preencher(int **m,int lin, int col){
    int i,j;
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            printf("[%d][%d]: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
}
main(){
    int **mat,linhas, colunas;
    printf("Digite as linhas e colunas da matriz: ");
    scanf("%d %d",&linhas,&colunas);
    mat=matriz(linhas,colunas);
    press(mat,linhas, colunas);
    preencher(mat,linhas,colunas);
    press(mat,linhas, colunas);
    free(mat);
}
