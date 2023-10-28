#include <stdio.h>
#include <stdlib.h>

int main () {

    int a, *b;
    float x, *y;

    y=&x;
    b=&a;

    printf("\nDigite um numero Inteiro para a Variavel A:\n");
    scanf(" %d", &a);
    printf("\nDigite um numero Real para a Variavel X:\n");
    scanf(" %f", &x);

    printf("\nVariavel A = [%d]", a);
    printf("\nVariavel X = [%.2f]", x);

    *b=3*(*b);
    *y=3*(*y);

    printf("\nVariavel A = [%d]", a);
    printf("\nVariavel X = [%.2f]", x);

    printf("\n\n");
    return 0;
    
}