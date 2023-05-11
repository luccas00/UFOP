#include "ex_09.h"
#include <stdio.h>

int main () {

    int vetor[5];

    printf("\nDigite os valores do vetor de 5 posicoes:\n");
    for (int i = 0; i < 5; i++)
    {
        fflush(stdin);
        scanf(" %d", &vetor[i]);
    }

    printf("\nSoma dos elementos do vetor: %d", soma(vetor, 5));

}