#include <stdio.h>
#include "ex_19.h"

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

void invertePilha(pilha *pilhaQualquer) {

    int i;
    item temp;

    for(i = 0; i < (pilhaQualquer->topo+1)/2; i++)
    {
        temp = pilhaQualquer->itemPilha[i];
        pilhaQualquer->itemPilha[i] = pilhaQualquer->itemPilha[pilhaQualquer->topo-i];
        pilhaQualquer->itemPilha[pilhaQualquer->topo-i] = temp;
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
