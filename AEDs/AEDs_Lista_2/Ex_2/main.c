
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "Ex2.h"

#define MAXVETORIAL 50

int main () {

    setlocale(LC_ALL, "pt-br");

    char op;

    Item *alocado = NULL;
    Lista lista;
    Item item_aux;
    int flag_vetor = 0;

    alocado = calloc(MAXVETORIAL, sizeof(Item));

    printf("\nComeçando as operaçoes com Listas de vetor\n ");
    printf("\nDigite qualquer caractere\n");
    scanf(" %c", &op);

    FazListaVazia(&lista);
    itens_Padrao(&lista);

    printf("\n\n- - Lista 1 - -");
    ImprimeLista(&lista);

    printf("\n\n\nComeçando as operaçoes com Vetores\n");
    printf("\nDigite qualquer caractere\n");
    scanf(" %c", &op);

    vetor_padrao(alocado, &flag_vetor);
    imprime_vetor(alocado, flag_vetor);

    conferencia_vetor(alocado, flag_vetor);

    free(alocado);

}

