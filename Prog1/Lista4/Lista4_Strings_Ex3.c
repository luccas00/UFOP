#include <stdio.h>

int main ()
{
    int n, soma=0;

    printf("\nOBS: Espacos sao contabilizados");
    printf("\nDigite quantos caracteres deseja em sua string: ");
    scanf("%d", &n);

    fflush(stdin);

    int i;
    char frase[n+1];

    printf("\nDigite sua frase ou nome:\n\n");
    fgets(frase, n+1, stdin);

    for (i = 0; i < n; i++)
    {
        if ((frase[i] == 'a') || (frase[i] == 'A')) 
        {
            soma++;
            frase[i]='b';
        }
    }

    printf("%s", frase);
    printf("\nQuantidade de Caracteres modificados: %d", soma);

    return 0;

}