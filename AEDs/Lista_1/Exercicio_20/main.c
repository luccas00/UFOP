#include <stdio.h>
#include "ex_20.h"

int main()
{
    pilha pilha1, pilha2;

    inicializaPilha(&pilha1);
    inicializaPilha(&pilha2);


    printf("Digite os valores da primeira pilha, encerre a leitura com -1:\n");
    int aux;
    scanf(" %d", &aux);
    while(aux != -1){
        pilha1.valor[++pilha1.topo] = aux;
        scanf("%d", &aux);
    }

    printf("Digite os valores da segunda pilha, encerre a leitura com -1:\n");
    scanf(" %d", &aux);
    while(aux != -1){
        pilha2.valor[++pilha2.topo] = aux;
        scanf("%d", &aux);
    }

    isEqual(&pilha1, &pilha2);

    return 0;
    
}