#include <stdio.h>

int soma(int a, int b)
{
    int result;
    result=a+b;
    return(result);
}

int main ()
{
    int x, y, resultado;
    printf("\nDigite o valor de A: ");
    scanf(" %d", &x);
    printf("\nDigite o valor de B: ");
    scanf(" %d", &y);

    resultado=soma(x, y);

    printf("Resultado igual: %d ", resultado);

    return 0;

}