#include <stdio.h>

int main ()
{
    int n, m;

    printf("\nDigite Respectivamente, os Parametros da sua Matriz:\nQuantidade de [Linhas] & [Colunas]\n[");
    scanf("%d", &n);
    printf("[");
    scanf("%d", &m);

    int matriz[n][m], soma=0, resultado;

    printf("\nDigite os valores da sua matriz quadrada, apenas numeros Inteiros.\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf(" %d", &matriz[i][j]);
            soma = soma + matriz[i][j];
        }  
    }

    for (int i = 0; i < n; i++)
    {
        printf("[");
        for (int j = 0; j < m; j++)
        {
            printf(" %d ", matriz[i][j]);
        }
        printf("]\n");
    }

    printf("Soma dos termos da matriz: %d", soma);
    
    return 0;

}