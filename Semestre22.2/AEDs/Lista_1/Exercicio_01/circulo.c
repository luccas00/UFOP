#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "circulo.h"

circulo *circ_cria (float x, float y, float r) {
    circulo *qualquer;
    qualquer = calloc(1, sizeof(circulo));
    qualquer->x = x;
    qualquer->y = y;
    qualquer->r = r;
    return (qualquer);
}

void circ_libera (circulo *qualquer) {
    free(qualquer);
}

float circ_area (circulo *qualquer) {
    return (3.14*pow((qualquer->r), 2));
    
}

int circ_concentricos (circulo *c_1, circulo *c_2) {
    if ((c_1->x == c_2->x) && (c_1->y == c_2->y))
    {
        printf("\n- - - - -");
        printf("\nCirculos com o mesmo centro");
        printf("\nCirculo_a, X e Y[%.2f, %.2f]", c_1->x, c_1->y);
        printf("\nCirculo_b, X e Y[%.2f, %.2f]\n", c_2->x, c_2->y);
        if (circ_raio(c_1) > circ_raio(c_2))
        {   
            printf("\nRaio do Maior Circulo: [%.2f]", c_1->r);
        }
        else if (circ_raio(c_2) > circ_raio(c_1))
        {
            printf("\nRaio do Maior Circulo: [%.2f]", c_2->r);
        }
        else
        {
            printf("\nCirculos com o Mesmo Raio");
        }
        
    }
    else
    {
        printf("\n- - - - -");
        printf("\nCirculos com centro diferente");
        printf("\nCirculo_a, X e Y[%.2f, %.2f]", c_1->x, c_1->y);
        printf("\nCirculo_b, X e Y[%.2f, %.2f]\n", c_2->x, c_2->y);
    }
}

float circ_raio (circulo *qualquer) {
    return qualquer->r;
}