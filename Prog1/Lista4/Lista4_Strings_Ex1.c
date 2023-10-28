#include <stdio.h>

int main ()
{
    int i;
    char frase[100];

    printf("\nDigite a frase:\n");
    fgets(frase, 100, stdin);

    for (i=0; frase[i] != '\0' ; i++)
    {
        if (frase[i] == ' ')
        {
            frase[i]='-';
        }
        
        printf("%c-", frase[i]);

    }

    return 0;
    
}