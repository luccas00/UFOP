#include "ex_10.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

    int aux, m, n;

    setlocale(LC_ALL, "pt-br");

    TypeLista lista_1;
    TypeItem item_aux;

    FazListaVazia(&lista_1);

    printf("A lista esta vazia ? : %d\n", ListaVazia(&lista_1));

    itensPadrao(&lista_1);
    Define(&item_aux);
    ListaInsere(&lista_1, item_aux);

    printf("\n- -Lista 1- -");
    ImprimeLista(&lista_1);


    printf("\nDigite os Indices dos termos que deseja trocar\n");
    scanf(" %d%d", &m, &n);
    TrocaItem(&lista_1, (m-1), (n-1));

    printf("\n- - -\nLista 1");
    ImprimeLista(&lista_1);

    printf("\n\n");
    return 0;

}