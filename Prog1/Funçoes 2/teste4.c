#include <stdio.h>

struct ponto
{
    int x, y, z;
};
typedef struct ponto ponto;

void le_ponto(ponto ponto[], int qtd)
{
    int i;

    for (i = 0; i < qtd; i++)
    {
    printf("\nDigite os valores de X, Y e Z do %d Ponto:\n", i+1);
    scanf(" %d", &ponto[i].x);     
    scanf(" %d", &ponto[i].y);
    scanf(" %d", &ponto[i].z);
    }
}

void mostra_ponto(ponto ponto[], int qtd)
{
    int i;

    for (i = 0; i < qtd; i++)
    {
    printf("\nPonto [%d] = X[%d] Y[%d] Z[%d]", i+1, ponto[i].x, ponto[i].y, ponto[i].z);
    }
}

int main ()
{
    ponto ponto[3];
    int num = 3;

    le_ponto(ponto, num);
    mostra_ponto(ponto, num);
    
}
