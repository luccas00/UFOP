#include <stdio.h>
#include <stdlib.h>
#include "imovel.h"

int main () {

    imovel *x;

    x = calloc(4, sizeof(imovel));

    capturaVetorImovel(x, 4);
    imprimeVetorImovel(x, 4);
    vetorImovel_MaisBarato(x, 4);

    free(x);
    return 0;

}