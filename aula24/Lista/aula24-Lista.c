#include "lista.h"
#include <stdio.h>
int menu(){
    int n;
    printf("\n1 - MOSTRAR A LISTA\n");
    printf("2 - TAMANHO DA LISTA\n");
    printf("3 - INSERIR ELEMENTO NA LISTA\n");
    printf("4 - REMOVER ELEMENTO DA LISTA\n");
    printf("0 - SAIR\n");
    printf("\nOPCAO >> ");
    scanf("%d",&n);
    system("cls");
    return n;
}
void pegarDado(DADO *d){
    printf("\nDigite um numero para ser armazenado >> ");
    scanf("%d",&d->valor);
}
main(){
    Lista *li = criarLista();
    DADO d;
    int o,v;
    while((o=menu())!=0){
        switch(o){
            case 1:
                system("cls");
                imprimirLista(li);
                break;
            case 2:
                system("cls");
                printf("tamanho da lista: %d\n",tamanhoLista(li));
                break;
            case 3:
                system("cls");
                pegarDado(&d);
                inserir(li,d);
                break;
            case 4:
                system("cls");
                imprimirLista(li);
                printf("Digite um valor para ser removido da lista >> ");
                scanf("%d",&v);
                remover(li,v);
                imprimirLista(li);
                break;
            default:
                printf("valor errado");
        }
    }
    liberarLista(li);
}
