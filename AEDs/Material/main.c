#include <stdio.h>
#include <stdlib.h>

int* ProdutosZerados (int * codigos, int estoque[], int tam, int* tam_zerados)
{
    int cont_zerados=0, i;
    for (i=0; i<tam; i++)
    {
        if (estoque[i]==0)
            cont_zerados++;
    }
    int * vet_zerados;
    vet_zerados = malloc (cont_zerados*sizeof(int));
    int j;

    for (i=0, j=0; i<tam; i++)
    {
        if (estoque[i]==0)
        {
            vet_zerados[j] = codigos[i];
            j++;
        }
    }

    *tam_zerados = cont_zerados;
    return vet_zerados;


}




int main()
{
    int codigos [] = {10,20,30,40,50,60,70,80};
    int estoque [] = {3,0,10,0,0,10,0,0};

    int tam_de_zerados, i;

    int * vetor_de_zerados;

    vetor_de_zerados = ProdutosZerados (codigos, estoque, 8, &tam_de_zerados);

    for (i=0; i<tam_de_zerados; i++)
    {
        printf("%d - ", vetor_de_zerados[i]);
    }

    free (vetor_de_zerados);

    return 0;
}
