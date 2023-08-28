#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "circulo.h"

int main () {

    circulo *x = NULL;
    circulo *y = NULL;

    float raio, a, b;
    float area_inicial[2];

    printf("\nCriando dois Circulos Iniciais\n");

    printf("\nDigite o Raio do Primeiro Circulo:\n");
    scanf(" %f", &raio);
    printf("\nDigite os Pontos X e Y do Primeiro Circulo:\n");
    scanf(" %f%f", &a, &b);
    x = circ_cria(a, b, raio);

    printf("\nDigite o Raio do Segundo Circulo:\n");
    scanf(" %f", &raio);
    printf("\nDigite os Pontos X e Y do Segundo Circulo:\n");
    scanf(" %f%f", &a, &b);
    y = circ_cria(a, b, raio);
    

    printf("\nVerificando se os Circulos tem o mesmo centro");

    circ_concentricos(&x[0], &y[0]);

    printf("\nImprimindo Area dos Dois Circulos\n");

    area_inicial[0]=circ_area(&x[0]);
    area_inicial[1]=circ_area(&y[0]);

    printf("\nArea do Primeiro Circulo = [%.2f]", area_inicial[0]);
    printf("\nArea do Segundo Circulo = [%.2f]", area_inicial[1]);

    int k;

    printf("\nQuantos Circulos a Mais deseja criar ?\n");
    scanf(" %d", &k);
    
    circulo *vetor[k];
    
    for (int i = 0; i < k; i++)
    {
        vetor[i] = NULL;
    }

    for (int i = 0; i < k; i++)
    {
        printf("\nDefinindo o Circulo N%d\n", i+1);
        printf("\nDigite o Raio do Circulo N%d:\n", i+1);
        scanf(" %f", &raio);  
        printf("\nDigite os Pontos X e Y, Respectivamente:\n");
        scanf(" %f%f", &a, &b);
        vetor[i] = circ_cria(a, b, raio);
    }

    printf("\nVerificando as areas dos circulos criados\n");
    
    float new_area[k];
    
    for (int i = 0; i < k; i++)
    
    {
        new_area[i] = circ_area(vetor[i]);
        printf("--------------------");
        printf("\nArea do Circulo N%d = [%.2f]\n", i+1, new_area[i]);
    }
    
    for (int i = 0; i < k; i++)
    {
        if (i+1 == k)
        {
            i = k;
        }
        else
        {
        circ_concentricos(vetor[i], vetor[i+1]);
        }
    }
    
    printf("\n");
    printf("\nFreeNote\n");

    for (int i = 0; i < k; i++)
    {
        circ_libera(vetor[i]);
    }
    
    circ_libera(x);
    circ_libera(y);

    printf("\n");
    printf("ClosedNote");
    printf("\n\n");

}