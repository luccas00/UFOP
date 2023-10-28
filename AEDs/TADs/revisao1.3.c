#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{

    setlocale(LC_ALL, "pt-BR");

    int *v=NULL, *p=NULL;
    int k, l;

    printf("\nDigite o tamanho desejado do seu 1º Vetor:\n");
    scanf(" %d", &k);

    printf("\nDigite o tamanho desejado do seu 2º Vetor:\n");
    scanf(" %d", &l);

    v=calloc(k, sizeof(int));
    p=malloc(l * sizeof(int));

    for (int i = 0; i < k; i++)
    {
        printf("\nDigite o %dº valor do vetor V:\n", i+1);
        scanf(" %d", &v[i]);
    }

    for (int j = 0; j < l; j++)
    {
        printf("\nDigite o %dº valor do vetor P:\n", j+1);
        scanf(" %d", &p[j]);
    }

    for (int i = 0; i < k; i++)
    {
        printf("\n%dº valor V= [%d]", i+1, v[i]);
    }

    for (int j = 0; j < l; j++)
    {
        printf("\n%dº valor P= [%d]", j+1, p[j]);
    }
    
    free(v);
    free(p);

    printf("\n\n");
    return 0;

}