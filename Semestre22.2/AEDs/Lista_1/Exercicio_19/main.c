#include <stdio.h>
#include "ex_19.h"

int main()
{
    int option;
    pilha pilha1;
    inicializaPilha(&pilha1);
    item aux;

    do
    {
        printf("\nDigite a chave do Item:\n");
        scanf(" %d", &aux.chave);
        printf("\nDigite o valor do Item:\n");
        scanf(" %d", &aux.valor);
        empilha(&pilha1, aux);
        printf("\nDigite -1 para encerrar ou qualquer outro valor para continuar");
        scanf(" %d", &option);
    } while (option != -1);

    printf("\nPilha antes da inversao: \n");
    imprimePilha(&pilha1);

    invertePilha(&pilha1);

    printf("\nPilha apos: \n");
    imprimePilha(&pilha1);

    return 0;

}

