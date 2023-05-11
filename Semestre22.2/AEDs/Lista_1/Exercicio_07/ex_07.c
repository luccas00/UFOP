#include <stdio.h>
#include <math.h>
#include "ex_07.h"

int somatorio(int n) {

    if (n < 0)
    {
        printf("\nNumero Negativo");
    }
    else if ((n == 1) || (n == 0))
    {
        return n;
    }
    else
    {
        return n + somatorio(n-1);
    }

}