#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "pets.h"   


void imprime(pets qualquer, int aux) {
    printf("\n---------------------");
    printf("\nNome do Pet N%d: %s", aux, qualquer.nome);
    printf("Idade do Pet N%d: %d", aux, qualquer.idade);
    printf("\nSexo do Pet N%d: %c", aux,  qualquer.sexo);
    printf("\n- - - - - - - - - - -");
}

void define(pets *qualquer, int aux) {
    char aux_1;
    printf("\nDigite o Nome do Pet N%d:\n", aux);
    fflush(stdin);
    fgets(qualquer->nome, 30, stdin);
    printf("\nDigite a Idade do Pet N%d:\n", aux);
    scanf(" %d", &qualquer->idade);
    printf("\nDigite o Sexo do Pet N%d:\n", aux);
    scanf(" %c", &aux_1);
    if ((aux_1 == 'M') || (aux_1 == 'm'))
    {
        qualquer->sexo = 'M';
    }
    else if ((aux_1 == 'F') || (aux_1 == 'f'))
    {
        qualquer->sexo = 'F';
    }
}

float media(pets qualquer[], int tam) {

    int choice;

    float media_final = 0;

    float media_fem = 0;
    float media_mas = 0;

    int flag_fem = 0;
    int flag_mas = 0;

    printf("\nEscolha o Numero da opcao desejada\n");
    printf("\nCalculo da Media de Idade por Sexo\n");
    printf("\n1 - Media Feminina");
    printf("\n2 - Media Masculina\n");

    scanf(" %d", &choice);

    switch (choice)
    {
    case 1:
        for (int i = 0; i < tam; i++)
        {
            if (qualquer[i].sexo == 'F')
            {
                flag_fem++;
                media_fem+=qualquer[i].idade;
            }
        }

        media_final = media_fem/flag_fem;
        return media_final;
        break;
    
    case 2:
        for (int i = 0; i < tam; i++)
        {
            if (qualquer[i].sexo == 'M')
            {
                flag_mas++;
                media_mas+=qualquer[i].idade;
            }
        }

        media_final = media_mas/flag_mas;
        return media_final;
        break;

    default:
        printf("\nOpcao Invalida\n");
        break;
    }

}