#include "ex_08.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int look(int vetor[], int tam, int num) {

    if (tam == 1)
    {
        if (vetor[0] == num)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        if (vetor[tam-1] == num)
        {
            return tam-1;
        }
        else
        {
            look(vetor, tam-1, num);
        }
    
    }

}