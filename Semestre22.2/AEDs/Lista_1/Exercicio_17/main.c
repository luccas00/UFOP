#include <stdio.h>
#include "ex_17.h"

int main()
{
    int option;
    pilha pilha1;
    inicializaPilha(&pilha1);
    item aux;

    chaveId chaveAux;

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

    imprimePilha(&pilha1);

    printf("\n\nDigite a chave do item que deseja remover\n");
    scanf(" %d", &chaveAux);

    removerEnesimoItem(&pilha1, chaveAux);
    imprimePilha(&pilha1);

    return 0;

}

