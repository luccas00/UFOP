#include <stdio.h>

int mult(int a, int b)
{
    int result;
    result = a*b;
    return result;
}

int main ()
{
    int vetor_a[10], vetor_b[10], vetor_c[10];
    int i;

    printf("\nDigite os valores do Primeiro Vetor:\n");
    
    for (i = 0; i < 10; i++)
    {
        scanf(" %d", &vetor_a[i]);
    }

    printf("\nDigite os valores do Segundo Vetor:\n");

    for (i = 0; i < 10; i++)
    {
        scanf(" %d", &vetor_b[i]);
    }

    for (i = 0; i < 10; i++)
    {
        vetor_c[i]=mult(vetor_a[i], vetor_b[i]);
    }
    
    printf("\n[");

    for (i = 0; i < 10; i++)
    {
        printf(" %d,", vetor_c[i]);
    }

    printf(" ]");

    printf("\n\n");
    return 0;

}