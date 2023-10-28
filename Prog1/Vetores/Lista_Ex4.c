#include <stdio.h>

int main ()
{
    int vetor[20];
    int i, menor_num, maior_num;

    printf("\nDigite os valores do Vetor [n]:\n");
    
    for (i = 0; i < 20; i++)
    {
        scanf(" %d", &vetor[i]);
    }

    maior_num=vetor[0];
    menor_num=vetor[0];
    
    for (i = 0; i < 20; i++)
    {
        if (vetor[i] > maior_num)
        {
            maior_num=vetor[i];
        }

        else if(vetor[i] < menor_num)
        {
            menor_num=vetor[i];
        }
    }

    printf("\n[");

    for (i = 0; i < 20; i++)
    {
        printf(" %d,", vetor[i]);
    }

    printf(" ]");

    printf("\nMenor Numero: [%d]", menor_num);
    printf("\nMaior Numero: [%d]", maior_num);

    printf("\n\n");
    return 0;    

}