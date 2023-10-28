#include <stdio.h>

int main ()
{
    int i;
    char nome1[100], nome2[100];

    printf("\nDigite seu nome:\n");
    fgets(nome1, 100, stdin);

    fflush(stdin);

    printf("\nDigite seu nome novamente:\n");
    fgets(nome2, 100, stdin);
    
    for (i=0; nome1[i] != '\0'; i++)
    {
        if (nome1[i] != nome2[i]){
            printf("\nNomes Diferentes\n");
            return 0;
        }
    }

    if (nome2[i+1] != '\0')
    {
        printf("\nNomes Diferentes\n");
        return 0;
    }
    
    printf("\nNomes Iguais");

    return 0;

}