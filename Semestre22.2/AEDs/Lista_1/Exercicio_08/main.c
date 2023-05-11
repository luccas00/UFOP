#include "ex_08.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    int num;
    int lista[5] = {1, 2, 3, 4, 5};

    printf("\nDigite o numero a ser encontrado:\n");
    scanf(" %d", &num);

    printf("Retorno: %d", look(lista, 5, num));

}