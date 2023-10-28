#include <stdio.h>

int main()
{

    int n;

    printf("\nDigite a quantidade de numeros:\n");
    scanf("%d", &n);

    int vetor[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nDigite o %d Numero:\n", i + 1);
        scanf(" %d", &vetor[i]);
    }

    int flag_c = 0, flag_d = 0;

    for (int i = 0; i < n; i++)
    {
        if (i<n-1)
        {    
            if (vetor[i] < vetor[i+1])
            {
                flag_c = 1;
            }
            else if (vetor[i] > vetor[i+1])
            {
                flag_d = 1;
            }
        }
    }

    if (flag_c != flag_d)
    {
        if (flag_c == 1)
        {
            printf("\nCrescente (-1)\n");
        }
        else
        {
            printf("\nDecrescente (1)\n");
        }
    }

    else
    {
        printf("\nContrario (0)\n");
    }

    return 0;
    
}