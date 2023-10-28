#include <stdio.h>

int somatorio(int n)
{
    int soma;
    soma=(n*(1+n))/2;
    return soma;
}

int main ()
{
    int num, result;

    printf("\nDigite o valor de N:\n");
    scanf(" %d", &num);
    result=somatorio(num);
    printf("\nSomatorio de %d ate 1 = %d", num, result);

    printf("\n\n");
    return 0;

}