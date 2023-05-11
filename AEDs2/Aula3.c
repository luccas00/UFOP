#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    arquivo = fopen("./dados.txt", "r");

    if (arquivo != NULL)
    {
        char c;
        while ((c = fgetc(arquivo)) != EOF)
        {
            printf(" %c\n", c);
        }
        fclose(arquivo);
        
    } else
    {
        printf("Erro ao abrir o arquivo");
    }

    arquivo = fopen("./dados.txt", "w");
    if (arquivo != NULL)
    {
        for (int i = 0; i < 10; i++)
        {
            fprintf(arquivo, " %d\n", i);
        }
        fclose(arquivo);
        
    } else
    {
        printf("Erro ao abrir o arquivo");
    }
    

}