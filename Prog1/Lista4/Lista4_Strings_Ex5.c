#include <stdio.h>

int main ()
{
    float valor[15];
    int plantas[3][15], compra[15];
    int i=0, j, k, total;

    for (j = 0; j < 15; j++)
    {
        printf("\nDigite o estoque ideal da planta de posicao %d: ", j);
        scanf("%d", &plantas[i][j]);
        printf("\nDigite o atual estoque da planta de posicao %d: ", j);
        scanf("%d", &plantas[i+1][j]);
        printf("\nDigite o valor da planta de posicao %d R$: ", j);
        scanf("%d", &plantas[i+2][j]);
    }

    for (k = 0; k < 15; k++)
    {   
        compra[k]=(plantas[i][k]-plantas[i+1][k]);
        if (compra[k] >= 0)
        {
            valor[k]=((float)compra[k]*plantas[i+2][k]);  
        }
        else
        {
            valor[k]=0;
            compra[k]=0;
        }
        total+=valor[k];
        
        printf("\n[Planta N %d]\n[Quantidade a ser comprada: %d]", k, compra[k]);
        printf("\n[Valor de compra da Planta N %d, R$ %.2f]", k, valor[k]);
        printf("\n");
    }

    printf("\n[Valor Total a gastar: R$ %d]", total);

    return 0;

}