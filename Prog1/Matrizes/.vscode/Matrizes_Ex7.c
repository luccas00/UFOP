#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int num()
{
    int num;
    int valor_maximo = 10;

    num = rand()%valor_maximo;
    return num;
}

int main()
{
    srand(time(NULL));

    int i, j, k;
    int matriz_C[5][5];
    int soma_1[5];
    int soma[5];

    soma_1[0] = 0;
    soma_1[1] = 0;
    soma_1[2] = 0;
    soma_1[3] = 0;
    soma_1[4] = 0;

    soma[0] = 0;
    soma[1] = 0;
    soma[2] = 0;
    soma[3] = 0;
    soma[4] = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            matriz_C[i][j]=num();
        }
    }
    
    for (i = 0; i < 5; i++)
    {
        printf("[");
        for (j = 0; j < 5; j++)
        {
            printf(" %d ", matriz_C[i][j]);
        }
        printf("]\n");
    }

    for (i = 0; i < 5; i++)
    {
        soma_1[0]=soma_1[0]+matriz_C[0][i];
        soma_1[1]=soma_1[1]+matriz_C[1][i];
        soma_1[2]=soma_1[2]+matriz_C[2][i];
        soma_1[3]=soma_1[3]+matriz_C[3][i];
        soma_1[4]=soma_1[4]+matriz_C[4][i];
    }

    for (i = 0; i < 5; i++)
    {
        soma[0]=soma[0]+matriz_C[i][0];
        soma[1]=soma[1]+matriz_C[i][1];
        soma[2]=soma[2]+matriz_C[i][2];
        soma[3]=soma[3]+matriz_C[i][3];
        soma[4]=soma[4]+matriz_C[i][4];
    }

    for (i = 0; i < 5; i++)
    {
        printf("\nSoma Linha N:%d = [%d]\nSoma Coluna N: %d = [%d]\n", i+1, soma_1[i], i+1, soma[i]);
    }
    


    int maior_soma = soma[0];
    int menor_soma = soma_1[0];
    int flag[2];

    flag[0] = 0;
    flag[1] = 0;

    for (i = 0; i < 5; i++)
    {
        if (soma[i] > maior_soma)
        {
            maior_soma=soma[i];
            flag[0]=i;
        }
    }

    for (i = 0; i < 5; i++)
    {
        if (soma_1[i] < menor_soma)
        {
            menor_soma=soma_1[i];
            flag[1]=i;
        }
    }
    

    printf("\nMaior Soma das Colunas C [%d]= [%d]\nMenor Soma das Linhas L [%d]= [%d]", flag[0]+1, maior_soma, flag[1]+1, menor_soma);
    
}