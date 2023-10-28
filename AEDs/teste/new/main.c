#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "retangulo.h"

int main () {

    retangulo *x = NULL;
    int k;
    float *per = NULL;
    float *are = NULL;

    printf("\nDigite quantos retangulos deseja criar\n");
    scanf(" %d", &k);
    
    x = calloc(k, sizeof(retangulo));
    per = calloc(k, sizeof(float));
    are = calloc(k, sizeof(float));

    for (int i = 0; i < k; i++)
    {
        printf("\nDigite a Altura do Retangulo N[%d]:\n", i+1);
        scanf("%f", &x[i].altura);
        printf("\nDigite a Largura do Retangulo N[%d]:\n", i+1);
        scanf("%f", &x[i].largura);
    }
    

    for (int w = 0; w < k; w++)
    {   
        printf("\n----------");
        area(x[w], &are[w]);
        perimetro(x[w], &per[w]);
        printf("\nArea do Retangulo N%d, Area[%.2f]", w+1, are[w]);
        printf("\nPerimetro do Retangulo N%d, Perimetro[%.2f]\n", w+1, per[w]);
    }

    free(x);
    free(are);
    free(per);

    printf("\n\n");
    printf("ClosedNote");
    printf("\n\n");

}