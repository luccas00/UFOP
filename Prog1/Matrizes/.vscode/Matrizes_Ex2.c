#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int matriz[3][6], nova_matriz[3][6];
    int i, j, k, num, valor_maximo=10;

    srand(time(0));

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            num = rand()%valor_maximo;
            matriz[i][j]=num;
        }
    }
    
    for (i = 0; i < 3; i++)
    {
        printf("[");
        for (j = 0; j < 6; j++)
        {
            printf(" %d ", matriz[i][j]);
        }
        printf("]\n");
    }

    printf("\nDigite um elemento K para multiplicar a todos os elementos da Matriz Aleatoria:\n");
    scanf(" %d", &k);

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            nova_matriz[i][j]=matriz[i][j]*k;
        }
    }

    for (i = 0; i < 3; i++)
    {
        printf("[");
        for (j = 0; j < 6; j++)
        {
            printf(" %d ", nova_matriz[i][j]);
        }
        printf("]\n");
    }

    printf("\n\n");
    return 0;

}