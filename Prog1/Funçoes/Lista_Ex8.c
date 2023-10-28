#include <stdio.h>

void fibo(int n)
{
    long int i;
    long int a[n];

    a[1]=1;
    a[2]=1;

    for (i = 1; i <= n; i++)
    {
        if (a[i] == 1)
        {
            printf("\n[%d]", a[i]);
        }
        else
        {
            a[i]=a[i-1]+a[i-2];
            printf("\n[%d]", a[i]);
        }
        
    }

}

int main ()
{
    long int num;

    printf("\nDigite quantos termos da sequencia de Fibonacci voce deseja:\n");
    scanf("%d", &num);
    fibo(num);

    printf("\n\n");
    return 0;

}