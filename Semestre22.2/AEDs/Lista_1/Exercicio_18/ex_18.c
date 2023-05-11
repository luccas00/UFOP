#include "ex_18.h"

void inicializaPilha(pilha *pilhaQualquer){
    pilhaQualquer->topo = 0;
}

void empilha(pilha *pilhaQualquer, char valor){
    pilhaQualquer->valor[++pilhaQualquer->topo] = valor;
}

char desempilha(pilha *pilhaQualquer){
    if(pilhaQualquer->topo > 0)
    {
        return pilhaQualquer->valor[pilhaQualquer->topo--];
    } else
    {
        return '\0';
    } 
}
