#include <stdio.h>

typedef struct
{
    int x, y;
} ponto;

int main ()
{
    ponto k;
    ponto b;

    printf("\nDigite o valor dos pontos K:\n");

    scanf(" %d", &(k.x));      
    scanf(" %d", &(k.y));

    printf("\nDigite o valor dos pontos B:\n");


    scanf(" %d", &(b.x));      
    scanf(" %d", &(b.y));

    printf("\nPonto = X[%d], Y[%d]", k.x, k.y);

    printf("\nPonto = X[%d], Y[%d]", b.x, b.y);

    return 0;

}
