#include <stdio.h>

typedef struct
{
    int x, y;
    
} ponto;

ponto le_ponto(ponto k)
{
    scanf(" %d", &(k.x)); 
    scanf(" %d", &(k.y));
}

void mostra_ponto(ponto k)
{
    printf("\nPonto = X[%d], Y[%d]", k.x, k.y);
}

int main ()
{
    ponto a;
    ponto b;

    printf("\nDigite o valor dos pontos A:\n");

    le_ponto(a);

    printf("\nDigite o valor dos pontos B:\n");

    le_ponto(b);

    mostra_ponto(a);

    mostra_ponto(b);

    return 0;

}