#include <stdio.h>

int main ()
{

    int n, numero_maior=0;

    printf("\nDigite a quantidade de numeros:\n");
    scanf(" %d", &n);

    int i, vetor[n];

    for (i=0; i<n; i++)
    {
        printf("\nDigite o %do Valor: \n", i);
        scanf("%d", &vetor[i]);
    }

    for (i=0; i<n; i++)
    {
        if (vetor[i]>numero_maior)
        {
            numero_maior=vetor[i];
        }
    }

    printf("\nMaior Numero digitado: %d \n", numero_maior);

    return 0;

}