#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"

int main () {

    ponto a, b;
    ponto vetor[5];

    float aux[5];

    printf("\nDigite as cordenadas X e Y do ponto A:\n");
    scanf(" %d%d", &a.x, &a.y);
    printf("\nDigite as cordenadas X e Y do ponto B:\n");
    scanf(" %d%d", &b.x, &b.y);

    distancia(&aux[0], a, b);

    printf("\nDistancia entre os pontos A[%d,%d] e B[%d,%d] = %.2f", a.x, a.y, b.x, b.y, aux[0]);

    printf("\nDigite as cordenadas X e Y do ponto Vetor[0]:\n");
    scanf(" %d%d", &vetor[0].x, &vetor[0].y);
    printf("\nDigite as cordenadas X e Y do ponto Vetor[4]:\n");
    scanf(" %d%d", &vetor[4].x, &vetor[4].y);

    distancia(&aux[1], vetor[0], vetor[4]);

    printf("\nDistancia entre os pontos Vetor'0'[%d,%d] e Vetor'4'[%d,%d] = %.2f", vetor[0].x, vetor[0].y, vetor[4].x, vetor[4].y, aux[1]);

    printf("\nClosedNote\n");
    printf("\n\n");

}