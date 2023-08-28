#include "ex_11.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    array lista1;
    item aux;
    celula base;

    int a, b;

    fazListaVazia(&lista1);
    listaVazia(&lista1);
    printf("\n\nPrimeira impressao\n");
    imprimeLista(lista1);

    /*Inserindo 4 celulas padrao*/
    celulasDeItensPadrao(&lista1);
    printf("\n\nSegunda impressao\n");
    imprimeLista(lista1);

    /*Inserir 1 celula manualmente*/
    // defineItem(&aux);
    // base.item = aux;
    // insereCelula(&lista1, base);

    printf("Digite os indices que deseja trocar de posicao\n");
    scanf(" %d", &a);
    scanf(" %d", &b);
    printf("\n\nTerceira impressao\n");
    trocaCelulas(&lista1, a, b);
    imprimeLista(lista1);



}