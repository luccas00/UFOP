#include <stdio.h>

int main ()
{
    int matriz[4][4];
    int i, j, k, linha, coluna, diag;
    char op1, op2;

    for (i = 0; i < 4; i++)
    {
        printf("\nDigite os elementos da linha N%d da sua Matriz:\n", i+1);
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &matriz[i][j]);
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

    printf("\nDigite a letra correspondente a opcao desejada:\n");
    printf("\nA - Soma:\n");
    printf("\nB - Multiplicaca:\n");
    scanf(" %c", &op1);

    if ((op1 == 'a') || (op1 == 'A'))
    {
        printf("\nDigite a letra correspondente a opcao desejada:\n");
        printf("\nA - Calculo para cada Linha");
        printf("\nB - Calculo para cada Coluna");
        printf("\nC - Calculo para Diagonal Principal\n");
        scanf(" %c", &op2);

        if ((op2 == 'a') || (op2 == 'A'))
        {
            printf("\nEscolha a Linha desejada:\n");
            scanf(" %d", &linha);
            printf("\nEscolha um elemento K para somar a todos os Elementos da Linha [N: %d]\n", linha);
            scanf(" %d", &k);

            for (i = 0; i < 4; i++)
            {
                matriz[linha-1][i]=matriz[linha-1][i]+k;
            }
        }
        
        else if ((op2 == 'b') || (op2 == 'B'))
        {
            printf("\nEscolha a Coluna desejada:\n");
            scanf(" %d", &coluna);
            printf("\nEscolha um elemento K para somar a todos os Elementos da Coluna [N: %d]\n", coluna);
            scanf(" %d", &k);

            for (i = 0; i < 4; i++)
            {
                matriz[i][coluna-1]=matriz[i][coluna-1]+k;
            }
        }

        else if ((op2 == 'c') || (op2 == 'C'))
        {
            printf("\nEscolha um elemento K para somar a todos os Elementos da Diagonal Principal\n");
            scanf(" %d", &k);

            for (i = 0; i < 4; i++)
            {
                matriz[i][i]=matriz[i][i]+k;
                printf("\n[%d]", matriz[i][i]);
            }
        }
    }

    else if ((op1 == 'b') || (op1 == 'B'))
    {
        printf("\nDigite a letra correspondente a opcao desejada:\n");
        printf("\nA - Calculo para cada Linha");
        printf("\nB - Calculo para cada Coluna");
        printf("\nC - Calculo para Diagonal Principal\n");
        scanf(" %c", &op2);

        if ((op2 == 'a') || (op2 == 'A'))
        {
            printf("\nEscolha a Linha desejada:\n");
            scanf(" %d", &linha);
            printf("\nEscolha um elemento K para multiplicar a todos os Elementos da Linha [N: %d]\n", linha);
            scanf(" %d", &k);

            for (i = 0; i < 4; i++)
            {
                matriz[linha-1][i]=matriz[linha-1][i]*k;
            }
        }
        
        else if ((op2 == 'b') || (op2 == 'B'))
        {
            printf("\nEscolha a Coluna desejada:\n");
            scanf(" %d", &coluna);
            printf("\nEscolha um elemento K para multiplicar a todos os Elementos da Coluna [N: %d]\n", coluna);
            scanf(" %d", &k);

            for (i = 0; i < 4; i++)
            {
                matriz[i][coluna-1]=matriz[i][coluna-1]*k;
            }
        }

        else if ((op2 == 'c') || (op2 == 'C'))
        {
            printf("\nEscolha um elemento K para multiplicar a todos os Elementos da Diagonal Principal\n");
            scanf(" %d", &k);

            for (i = 0; i < 4; i++)
            {
                matriz[i][i]=matriz[i][i]*k;
                printf("\n[%d]", matriz[i][i]);
            }
        }
    }

    printf("\n\n");

    for (i = 0; i < 4; i++)
    {
        printf("[");
        for (j = 0; j < 4; j++)
        {
            printf(" %d ", matriz[i][j]);
        }
        printf("]\n");
    }

    printf("\n\n");
    return 0;

}