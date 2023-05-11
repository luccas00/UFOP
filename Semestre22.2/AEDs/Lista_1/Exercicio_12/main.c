#include "ex_12.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    array lista1, lista2;
    item aux;
    celula base;

    int a, b, n;

    fazListaVazia(&lista1);
    fazListaVazia(&lista2);

    /*Inserindo 4 celulas padrao*/
    celulasDeItensPadrao(&lista1);
    printf("\n\nImprimindo Lista 1\n");
    imprimeLista(lista1);
    celulasDeItensAuxiliar(&lista2);
    printf("\n\nImprimindo Lista 2\n");
    imprimeLista(lista2);
    
    printf("Testando inssub, ou, insereLista\n");
    printf("Digite o indice da lista_1\n");
    scanf(" %d", &a);
    printf("Digite o indice da lista_2\n");
    scanf(" %d", &b);
    printf("Digite o valor de N\n");
    scanf(" %d", &n);

    printf("\n\nLista 1 apos inssub\n");
    insereLista(&lista1, a, &lista2, b, n);
    imprimeLista(lista1);
    printf("\n\nLista 2 apos inssub\n");
    imprimeLista(lista2);

}