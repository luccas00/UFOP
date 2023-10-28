#include <stdio.h>
#include <stdlib.h>

int *produtosZerados(int vetor_estoque[], int vetor_codigo[], int tam, int *qtd)
{
    int *new_vetor , j;

    for (int j = 0; j < tam; j++)
    {
        if (vetor_estoque[j]==0)
        {
            *qtd=*qtd+1;
        }
    }

    new_vetor=calloc(*qtd, sizeof(int));

    for (int i = 0, j = 0; i < tam; i++)
    {
        if (vetor_estoque[i]==0)
        {
            new_vetor[j]=vetor_codigo[i];
            j++;
        }
    }

    return new_vetor;

}

int main ()
{
    int n;

    printf("\nDigite a quantidade de produtos:\n");
    scanf("%d", &n);

    int estoque[n], codigo[n];
    int x = 0;
    int *vetor_zeros;


    for (int i = 0; i < n; i++)
    {
        printf("\nDigite o Codigo e o Estoque do %dº Produto:\n", i+1);
        scanf(" %d%d", &codigo[i], &estoque[i]);
    }
    
    vetor_zeros=produtosZerados(estoque, codigo, n, &x);

    for (int i = 0; i < n; i++)
    {
        printf("\n[%dº Produto]: Codigo[%d], Estoque[%d]", i+1, codigo[i], estoque[i]);
    }

    printf("\nProdutos com estoque Zerado: Quantidade[%d]\n", x);
    
    for (int i = 0; i < x; i++)
    {
        printf("\nCodigo[%d]", vetor_zeros[i]);
    }

    free(vetor_zeros);

    printf("\n\n");
    return 0;

}