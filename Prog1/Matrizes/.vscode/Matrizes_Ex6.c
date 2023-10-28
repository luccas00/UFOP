#include <stdio.h>

int soma(int a, int b, int c)
{
    int soma, i;
    
    soma = 0;

    soma=a+b+c;
    return soma;

}

int main()
{
    int matriz[3][3];
    int i, j;
    int result[8];

    printf("\nDigite os termos da sua Matriz:\n");
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf(" %d", &matriz[i][j]);
        }
    }

    printf("\n");

    for (i = 0; i < 3; i++)
    {
        printf("[");
        for (j = 0; j < 3; j++)
        {
            printf(" %d ", matriz[i][j]);
        }
        printf("]\n");
    }

    result[0]=soma(matriz[0][0], matriz[1][1], matriz[2][2]);

    result[1]=soma(matriz[0][0], matriz[0][1], matriz[0][2]);
    result[2]=soma(matriz[1][0], matriz[1][1], matriz[1][2]);
    result[3]=soma(matriz[2][0], matriz[2][1], matriz[2][2]);
    
    result[4]=soma(matriz[0][0], matriz[1][0], matriz[2][0]);
    result[5]=soma(matriz[0][1], matriz[1][1], matriz[2][1]);
    result[6]=soma(matriz[0][2], matriz[1][2], matriz[2][2]);

    result[7]=soma(matriz[0][2], matriz[1][1], matriz[2][0]);

    for (i = 0; i < 8; i++)
    {
        printf("\n[Soma = %d]", result[i]);
    }
    
    if ((result[0] == result[1]) && (result[1] == result[2]) &&
        (result[2] == result[3]) && (result[3] == result[4]) &&
        (result[4] == result[5]) && (result[5] == result[6]) &&
        (result[6] == result[7]) && (result[7] == result[0]))
    {
        printf("\n\nQuadrado Magico !");
    }
    
    else
    {
        printf("\nNao e um quadrado magico\n");
    }
    
    printf("\n\n");
    return 0;
    
}