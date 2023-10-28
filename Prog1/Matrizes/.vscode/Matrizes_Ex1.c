#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int matriz[3][4], soma=0, multi=1;
    int i, j, num, valor_maximo=10;

    srand(time(0));

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            num = rand()%valor_maximo;
            matriz[i][j]=num;
            soma=soma+num;
            multi=multi*num;
        }
    }
    
    for (i = 0; i < 3; i++)
    {
        printf("[");
        for (j = 0; j < 4; j++)
        {
            printf(" %d ", matriz[i][j]);
        }
        printf("]\n");
    }

    printf("\nSoma dos termos da matriz: %d", soma);
    printf("\nMultiplicacao dos termos da matriz: %d", multi);

    printf("\n\n");
    return 0;

}