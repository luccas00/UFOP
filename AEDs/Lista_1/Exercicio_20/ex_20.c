#include <stdio.h>
#include "ex_20.h"

void inicializaPilha(pilha *pilhaQualquer){
    pilhaQualquer->topo = -1;
}

int isEqual(pilha *pilha1, pilha *pilha2){
    if(pilha1->topo != pilha2->topo) {
        printf("Pilhas Diferentes !");
        return 0;
    }

    for(int i = 0; i <= pilha1->topo; i++){
        if(pilha1->valor[i] != pilha2->valor[i]) {
            printf("Pilhas Diferentes !");
            return 0;
        }
    }

    printf("Pilhas iguais !!");

    return 1;
}