#include <stdio.h>
#include "retangulo.h"

void captura_retangulo (retangulo *qualquer) {

    printf("\nDigite a Altura do Retangulo: ");
    scanf("%f", &qualquer->altura);
    printf("\nDigite a Largura do Retangulo: ");
    scanf("%f", &qualquer->largura);

}

float area_retangulo (retangulo qualquer) {

    float area;
    area = qualquer.altura*qualquer.largura;
    return area;

}

float perimetro_retangulo (retangulo qualquer) {

    float perimetro;
    perimetro = (2*qualquer.altura)+(2*qualquer.largura);
    return perimetro;

}