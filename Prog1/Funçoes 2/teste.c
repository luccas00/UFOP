#include <stdio.h>

struct ponto
{
    int x, y;
};
struct ponto pnt;

void le_ponto(struct ponto k)
{
    scanf(" %d", &pnt.x);      
    scanf(" %d", &pnt.y);    
}

void mostra_ponto(struct ponto k)
{
    printf("\nPonto A = X[%d], Y[%d]", pnt.x, pnt.y);
}

int main ()
{
    struct ponto a;
    struct ponto b;

    printf("\nDigite o valor dos pontos A:\n");
    le_ponto(a);
    mostra_ponto(a);

    printf("\nDigite o valor dos pontos B:\n");
    le_ponto(b);
    mostra_ponto(b);
    
}
