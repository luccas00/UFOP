#include <stdio.h>

typedef struct
{
    int x, y;
} ponto;

void mostra_ponto(ponto k)
{
    printf("\nPonto = X[%d], Y[%d]", k.x, k.y);
}

void le_ponto(ponto k)
{
    printf("\nDigite o valor dos pontos X e Y:\n");
    scanf(" %d", &(k.x));     
    scanf(" %d", &(k.y));
}

int main ()
{
    ponto a;
    ponto b;

    le_ponto(a);
    // scanf("%d%d", &(a.x), &(a.y));

    le_ponto(b);
    // scanf("%d%d", &(b.x), &(b.y));

    mostra_ponto(a);
    mostra_ponto(b);

    printf("\n\n\n[%d][%d][%d][%d]", a.x, a.y, b.x, b.y);

    return 0;

}