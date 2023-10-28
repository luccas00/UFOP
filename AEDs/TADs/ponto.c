#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"

void distancia(float *aux, ponto mark_1, ponto mark_2) {
    *aux = sqrt(pow((mark_2.x-mark_1.x), 2) + pow((mark_2.y-mark_1.y), 2));
}