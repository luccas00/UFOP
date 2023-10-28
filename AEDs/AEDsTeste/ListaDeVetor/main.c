#include "testeLista.h"
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

    itens_Padrao(&lista_1);

    printf("\n- - Lista 1 - -");
    ImprimeLista(&lista_1);

    shellSort(&lista_1);
    ImprimeLista(&lista_1);

    printf("\n\n");
    return 0;

}