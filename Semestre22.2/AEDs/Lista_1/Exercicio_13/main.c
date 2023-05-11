#include "ex_13.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    array lista1;
    celula *teste = NULL;
    int n = 0;

    fazListaVazia(&lista1);

    /*Inserindo 4 celulas padrao*/
    celulasDeItensPadrao(&lista1);
    printf("\n\nImprimindo Lista 1\n");
    imprimeLista(lista1);

    /*Encontrando o ponteiro de posicao N*/
    printf("Digite a posicao desejada do Array");
    scanf(" %d", &n);

    
    teste = lista1.primeiro->apontador;
    
    for (int i = 0; i < (n-1) && teste != NULL; i++)
    {
        teste = teste->apontador;
    }

    trocaCelula(&lista1, teste);

    printf("\n\nLista 1 apos a troca\n");
    imprimeLista(lista1);

}