#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto
{
    float x, y;
};
typedef struct ponto ponto;

int main () {

    ponto a;

    float dis;

    printf("\n\nBem vindo !!\n");
    printf("\nDigite os valores de X e Y do ponto A:");
    scanf(" %f%f", &a.x, &a.y);
    printf("\nPonto A\n[x = %.1f]\n[y = %.1f]", a.x, a.y);
    dis=sqrt(pow((0-(a.x)), 2)+pow((0-(a.y)), 2));
    printf("\nDistancia entre o Ponto A ate a Origem: [%.1f] u.m.", dis);

    printf("\n\n");
    return 0;

}