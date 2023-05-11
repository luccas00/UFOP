#include <stdio.h>
#include "ex_17.h"

void inicializaPilha(pilha *pilhaQualquer){
    pilhaQualquer->topo = -1;
}

void empilha(pilha *pilhaQualquer, item qualquer){
    pilhaQualquer->itemPilha[++pilhaQualquer->topo] = qualquer;
}

item desempilha(pilha *pilhaQualquer){
    if(pilhaQualquer->topo >= 0) {
        return pilhaQualquer->itemPilha[pilhaQualquer->topo--];
    }
}

void imprimePilha(pilha *pilhaQualquer) {

    for (int i = 0; i <= pilhaQualquer->topo; i++)
    {
        printf("\n- - -");
        printf("\nChave: %d", pilhaQualquer->itemPilha[i].chave);
        printf("\nValor: %d", pilhaQualquer->itemPilha[i].valor);
    }
}

void removerEnesimoItem(pilha *pilhaQualquer, chaveId chave) {

    pilha pilhaAuxiliar;
    inicializaPilha(&pilhaAuxiliar);

    item aux;
    int flag = 0;

    while(pilhaQualquer->topo >= 0) {

        aux = desempilha(pilhaQualquer);
        if(aux.chave != chave || flag == 1) {
            empilha(&pilhaAuxiliar, aux);
        }
        else {
            flag = 1;
        }

    } 
    
    while(pilhaAuxiliar.topo >= 0) {
        aux = desempilha(&pilhaAuxiliar);
        empilha(pilhaQualquer, aux);
    }

}
