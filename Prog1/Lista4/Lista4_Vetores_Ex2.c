#include <stdio.h>

int main ()
{
    int i, vetor[50];

    for (i=0; i<=50; i++)
    {
        vetor[i]=200+i;
        printf("\nVetor[%d] = %d\n", i, vetor[i]);
    }
    
}