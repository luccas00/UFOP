#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "retangulo.h"

void perimetro(retangulo qualquer, float *aux) {

    *aux = ((qualquer.altura*2)+(qualquer.largura*2));

}

void area(retangulo qualquer, float *aux) {
    
    *aux = qualquer.altura*qualquer.largura;

}