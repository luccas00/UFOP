#include <stdio.h>

int somaintervalo(int n1, int n2);

int main()
{
    int num1, num2, soma;

    printf("\nDigite os valores de A e B para analisar o intervalo:\n");
    scanf("%d%d", &num1, &num2);
    soma=somaintervalo(num1, num2);
    printf("\n\nValor da soma dos termos = [%d]\n", soma);

    printf("\n\n");
    return 0;

}

int somaintervalo(int n1, int n2)
{
    int soma=0;
    int i;

    if (n1 > n2)
    {
        printf("\n");
        for (i = n2; i <= n1 ; i++)
        {
            printf("[%d]+", i);
            soma=soma+i;
        }

        return soma;
        
    }

    else if (n2 > n1)
    {
        printf("\n");
        for (i = n1; i <= n2; i++)
        {
            printf("[%d]", i);
            soma=soma+i;
            if (i != n2)
            {
                printf("+");
            }
        }

        return soma;
        
    }
    
}