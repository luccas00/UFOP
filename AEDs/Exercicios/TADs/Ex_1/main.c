#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include "retangulo.h"

int main () {

    retangulo A, B;
    retangulo *x;
    retangulo *y;

    y = calloc(1, sizeof(retangulo));
    x = calloc(2, sizeof(retangulo));

    captura_retangulo(&A);
    captura_retangulo(&B);

    printf("\n\nArea do Retangulo A: [%.2f]", area_retangulo(A));
    printf("\nPerimetro do Retangulo A: [%.2f]", perimetro_retangulo(A));
    
    printf("\n\nArea do Retangulo B: [%.2f]", area_retangulo(B));
    printf("\nPerimetro do Retangulo B: [%.2f]", perimetro_retangulo(B));

    captura_retangulo(&x[0]);
    captura_retangulo(&x[1]);

    printf("\n\nArea do Retangulo X[0]: [%.2f]", area_retangulo(x[0]));
    printf("\nPerimetro do Retangulo X[0]: [%.2f]", perimetro_retangulo(x[0]));
    
    printf("\n\nArea do Retangulo X[1]: [%.2f]", area_retangulo(x[1]));
    printf("\nPerimetro do Retangulo X[1]: [%.2f]", perimetro_retangulo(x[1]));

    captura_retangulo(y);
    
    printf("\n\nArea do Retangulo Y: [%.2f]", area_retangulo(*y));
    printf("\nPerimetro do Retangulo Y: [%.2f]", perimetro_retangulo(*y));

    free(x);
    free(y);
    return 0;

}