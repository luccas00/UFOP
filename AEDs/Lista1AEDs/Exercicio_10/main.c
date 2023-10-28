#include "ex_10.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

    int aux;

    setlocale(LC_ALL, "pt-br");

    TypeLista lista_1, lista_2;
    TypeItem item_aux;

    FazListaVazia(&lista_1);
    FazListaVazia(&lista_2);

    printf("A lista esta vazia ? : %d\n", ListaVazia(&lista_1));
    printf("A lista esta vazia ? : %d\n", ListaVazia(&lista_2));

    Define(&item_aux);
    ListaInsere(&lista_1, item_aux);

    Define(&item_aux);
    ListaInsere(&lista_1, item_aux);

    Define(&item_aux);
    ListaInsere(&lista_1, item_aux);

    Define(&item_aux);
    ListaInsere(&lista_1, item_aux);

    printf("\n- -Lista 1- -");
    ImprimeLista(&lista_1);
    printf("\n- -Lista 2- -");
    ImprimeLista(&lista_2);

    printf("\nDigite o Indice do Item que deseja Imprimir - ");
    scanf(" %d", &aux);
    ImprimeItem(&lista_1, aux);

    printf("\nDigite o Indice do Item que deseja retirar - ");
    scanf(" %d", &aux);
    ListaRetira(&lista_1, aux, &item_aux);

    ImprimeItemGenerico(item_aux);

    printf("\n\nNova Impressão\n\n");
    printf("\n- -Lista 1- -");
    ImprimeLista(&lista_1);

    ListaCopia(&lista_2, &lista_1);
    printf("\n- -Lista 2- -");
    ImprimeLista(&lista_2);

    int m, n;
    printf("\nDigite os Indices dos termos que deseja trocar\n");
    scanf(" %d%d", &m, &n);
    TrocaItem(&lista_1, (m-1), (n-1));

    printf("\n- - -\nLista 1");
    ImprimeLista(&lista_1);

    printf("\n- - -\nLista 2");
    ImprimeLista(&lista_2);

    printf("\n\n");
    return 0;

}