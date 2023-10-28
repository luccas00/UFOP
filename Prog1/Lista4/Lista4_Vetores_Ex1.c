#include <stdio.h>
#include <math.h>

int main (void)
{
    int i, vetor[10];

    for (i=0; i<10; i++)
    {
        printf("\nDigite o valor da posicao N:%d\n", i);
        scanf("%d", &vetor[i]);
    }
   
    for (i=0; i<10; i++)
    {
        if (i%2 == 0)
        {
            printf("\nNumero Digitado: %d", vetor[i]);
        }
    }
}