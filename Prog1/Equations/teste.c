#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void raizes(float *a, float *b, float *c, float *d, float *x1, float *x2) {

    *x1=((-(*b))+sqrt(*d))/(2*(*a));
    *x2=((-(*b))-sqrt(*d))/(2*(*a));

}

int main () {

    float a, b, c, d;
    float x1, x2;
    x1 = 0;
    x2 = 0;
    
    printf("\nBem Vindo ao programa para calculo da Raiz");
    printf("\nDigite os valores de A, B e C da sua equacao, respectivamente:\n");
    scanf("%f%f%f", &a, &b, &c);

    d=pow(b, 2)-4*a*c;

    printf("\nRaizes\nX_1 = [%.2f]\nX_2 = [%.2f]\n", x1, x2);

    if (d < 0)
    {
        printf("\nDelta < 0, A Equacao nao possui resultado\n");
    }

    else if (d == 0)
    {
        printf("\nDelta = 0, A equacao possui duas raizes iguais\n");
        raizes(&a, &b, &c, &d, &x1, &x2);
    }
    
    else if (d > 0)
    {
        printf("\nDelta > 0, A equacao possui duas raizes diferentes");
        raizes(&a, &b, &c, &d, &x1, &x2);
    }

    printf("\nRaizes\nX_1 = [%.2f]\nX_2 = [%.2f]\n", x1, x2);
    printf("\nDelta = [%.2f]\n", d);

    printf("\n\n");
    return 0;

}