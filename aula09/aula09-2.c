#include <stdio.h>
void imprimir(int m[3][3]){
    int i, j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",m[i][j]);
        }
        putchar('\n');
    }
}
void atribuir(int m[3][3]){
    int i, j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&m[i][j]);
        }
    }
}
main(){
    int v[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    imprimir(v);
    atribuir(v);
    imprimir(v);
}
