#include "testeLista.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "pt-br");

    TypeLista lista_1;
    TypeCelula cel_1;
    TypeItem item_aux;

    FazListaVazia(&lista_1);

    printf("\n\n- - - - -");
    printf("\nA lista esta vazia ? %d ", ListaVazia(&lista_1));

    DefineItem(&item_aux);
    InsereCelula(&lista_1, &item_aux);

    DefineItem(&item_aux);
    InsereCelula(&lista_1, &item_aux);

    DefineItem(&item_aux);
    InsereCelula(&lista_1, &item_aux);

    DefineItem(&item_aux);
    InsereCelula(&lista_1, &item_aux);

    DefineItem(&item_aux);
    InsereCelula(&lista_1, &item_aux);
    
    printf("\n\n- - Nova Lista");
    ImprimeLista(&lista_1);

}

