#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int matriz[4][4];
    int i, j, num, valor_maximo=10, positionA, positionB, positionX, positionY;

    srand(time(0));

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            // x = 1 + ( rand() % 10 )
            num = rand()%valor_maximo;
            matriz[i][j]=num;
        }
    }

    int maior_num = matriz[0][0];
    int menor_num = matriz[0][0];

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (matriz[i][j] > maior_num)
            {   
                maior_num=matriz[i][j];
                positionA=i;
                positionB=j;
            }

            else if (matriz[i][j] < menor_num)
            {
                menor_num=matriz[i][j];
                positionX=i;
                positionY=j;
            }

        }
        
    }
    
    for (i = 0; i < 4; i++)
    {
        printf("[");
        for (j = 0; j < 4; j++)
        {
            printf(" %d ", matriz[i][j]);
        }
        printf("]\n");
    }

    printf("\nMaior numero da Matriz Aleatoria: %d", maior_num);
    printf("\nPosicao Matriz[%d][%d]", positionA+1, positionB+1);
    printf("\n");
    printf("\nMenor numero da Matriz Aleatoria: %d", menor_num);
    printf("\nPosicao Matriz[%d][%d]", positionX+1, positionY+1);

    printf("\n\n");
    return 0;

}