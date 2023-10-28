#include <stdio.h>

int contaimpar(int n1, int n2);

int main ()
{
    int num1, num2;

    printf("\nDigite os Valores de A e B para verificar o Intervalo entre eles:\n");
    scanf("%d%d", &num1, &num2);
    contaimpar(num1, num2);

    printf("\n\n");
    return 0;

}

int contaimpar(int n1, int n2)
{
    int num;
    int qtd=0, soma=0;

    if (n1 > n2)
    {
        qtd=n1+1-n2;

        int impar[qtd];
        int k=0;

        for (int i = n2; i <= n1; i++)
        {
            if (i%2==1)
            {
                impar[k]=i;
                printf("\n[%d]", i);
                soma+=1;
            }

            k+=1;

        }
    
    printf("\nNumeros de termos Impar no Intervalo [%d]", soma);
    return soma;

    }

    else if (n2 > n1)
    {
        qtd=n2+1-n1;

        int impar[qtd];
        int k=0;

        for (int i = n1; i <= n2; i++)
        {
            if (i%2==1)
            {
                impar[k]=i;
                printf("\n[%d]", i);
                soma+=1;
            }

            k+=1;

        }

    printf("\nNumeros de termos Impar no Intervalo [%d]", soma);
    return soma;
        
    }

}