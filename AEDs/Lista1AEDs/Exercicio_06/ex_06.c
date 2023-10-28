#include "ex_06.h"
#include <math.h>
#include <stdio.h>

void inverte(int n) {

    if (n < 10)
    {
        printf("%d", n);
    }
    else
    {
        printf("%d", n%10);
        inverte(n/10);
    }
    
}