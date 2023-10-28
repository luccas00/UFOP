#include <stdio.h>

int main ()
{
    int i, n;
    int vetor[20], flag[2];

    flag[0] = 0;
    flag[1] = 0;

    printf("\nEntre com os valores do Vetor [n] = \n");

    for (i = 0; i < 20; i++)
    {
        scanf(" %d", &vetor[i]);

        if (vetor[i]%2 == 1)
        {
            flag[0]+=1;
        }
        else if (vetor[i]%2 == 0)
        {
            flag[1]+=1;
        }  
    }

    printf("\n[");

    for (i = 0; i < 20; i++)
    {
        printf(" %d,", vetor[i]);
    }

    printf(" ]");

    printf("\nQuantidade de N's Par = [%d]", flag[1]);
    printf("\nQuantidade de N's Impar = [%d]", flag[0]);

    printf("\n\n");
    return 0;

}