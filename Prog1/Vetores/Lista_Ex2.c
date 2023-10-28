#include <stdio.h>

int main ()
{
    int i, media, soma;
    int vetor[20];

    soma = 0;

    printf("\nEntre com os valores do Vetor [n] = \n");

    for (i = 0; i < 20; i++)
    {
        scanf(" %d", &vetor[i]);

        if (vetor[i] <= 0)
        {
            printf("\nApenas Positivos Inteiros !\n");
            printf("Digite Novamente\n");
            i--;
        }

        soma=soma+vetor[i];

    }

    media=soma/20;

    printf("\n[");

    for (i = 0; i < 20; i++)
    {
        printf(" %d,", vetor[i]);
    }

    printf(" ]");

    printf("\nMedia dos Numeros = [%d]", media);
    printf("\nNumeros Abaixo da Media:");

    printf("\n[");

    for (i = 0; i < 20; i++)
    {
        if (vetor[i] < media)
        {
            printf(" %d,", vetor[i]);
        }
        
    }

    printf(" ]");

    printf("\n\n");
    return 0;

}