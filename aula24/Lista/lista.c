#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Lista* criarLista(){
    Lista *li = (Lista*)malloc(sizeof(Lista));
    if(li!=NULL){
        *li = NULL;
    }
    return li;
}
void liberarLista(Lista *li){
    if(li!=NULL){
        ELEM *aux;
        while(*li!=NULL){
            aux=*li;
            *li=aux->prox;
            free(aux);
        }
        free(li);
    }
}
int tamanhoLista(Lista *li){
    int n=0;
    if(li!=NULL){
        ELEM *aux=*li;
        while(aux!=NULL){
            n++;
            aux=aux->prox;
        }
    }
    return n;
}
void inserir(Lista *li, DADO d){
    if(li!=NULL){
        ELEM *e=(ELEM*)malloc(sizeof(ELEM));
        e->d=d;
        if(*li==NULL){
            e->prox=NULL;
            *li=e;
        }else{
            ELEM *aux=*li;
            if(aux->d.valor > e->d.valor){
                e->prox=*li;
                *li=e;
            }else{
                ELEM *ant;
                while((aux!=NULL)&&(aux->d.valor < e->d.valor)){
                    ant=aux;
                    aux=aux->prox;
                }
                ant->prox=e;
                e->prox=aux;
            }
        }
    }
}
void remover(Lista *li, int num){
    if(li!=NULL){
        if(*li==NULL)
            return;
        ELEM *aux=*li;
        if(aux->d.valor==num){
            *li=aux->prox;
            free(aux);
        }else{
            ELEM *ant;
                while((aux!=NULL)&&(aux->d.valor != num)){
                    ant=aux;
                    aux=aux->prox;
                }
                if(aux==NULL){
                    return;
                }
                ant->prox = aux->prox;
                free(aux);
        }
    }
}
void imprimirLista(Lista *li){
    if(li!=NULL){
        ELEM *aux=*li;
        if(aux!=NULL){
            printf("Elementos da Lista\n\n");
            while(aux!=NULL){
                printf("%d\n",aux->d.valor);
                aux=aux->prox;
            }
        }else{
            printf("Lista Vazia\n");
        }

    }
}
