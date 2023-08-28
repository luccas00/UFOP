#include "ex_09.h"

int soma(int vetor[], int tam) {

    if (tam == 0)
    {
        return 0;
    }
    else
    {
        return vetor[tam-1] + soma(vetor, tam-1);
    }

}