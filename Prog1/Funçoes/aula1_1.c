#include <stdio.h>

void imprime_cabec(void)
{
    printf("\n***************************************");
    printf("\n************ Programacao 1 ************");
    printf("\n***************************************\n");
}

int soma(int a, int b)
{
    int result;
    result=a+b;
    printf("\nResultado: %d ", result);
}

int main ()
{
    int x, y, resultado;

    imprime_cabec();

    printf("\nDigite o valor de A: ");
    scanf(" %d", &x);
    printf("\nDigite o valor de B: ");
    scanf(" %d", &y);
    
    soma(x, y);

    return 0;
}