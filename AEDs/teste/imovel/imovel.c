#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "imovel.h"

void imprime(imovel qualquer, int aux) {
    printf("\n- - - - -");
    printf("\nImovel N%d:", aux);
    printf("\nProprietario: %s", qualquer.proprietario);
    printf("Area em Metros Quadrados: %.2f", qualquer.area);
    printf("\nValor em Reais, R$:%.2f", qualquer.valor);
    printf("\nEndereço: ");
    printf("\nRua: %s", qualquer.qualquer.rua);
    printf("Numero: %d", qualquer.qualquer.numero);
    printf("\nCidade: %s", qualquer.qualquer.cidade);
}

float mais_barato(imovel qualquer[], int aux) {
    float cheap = qualquer[0].valor;
    int flag_cheap;

    for (int i = 0; i < aux; i++)
    {
        if (qualquer[i].valor < cheap)
        {
            cheap = qualquer[i].valor;
            flag_cheap = i;
        }
    }
    printf("\nImovel Mais Barato: Imovel N%d", flag_cheap+1);
    imprime(qualquer[flag_cheap], flag_cheap);
}

void define(imovel *qualquer, int aux) {
    printf("\n- - - - -");
    printf("\nImovel N%d:", aux);
    printf("\nDigite o Proprietario: ");
    fflush(stdin);
    fgets(qualquer->proprietario, 100, stdin);
    printf("\nDigite a Area em Metros Quadrados: ");
    scanf(" %f", &qualquer->area);
    printf("\nDigite o Valor em Reais, R$: ");
    scanf(" %f", &qualquer->valor);
    printf("\nDefinindo o Endereço:");
    printf("\nDigite a Rua: ");
    fflush(stdin);
    fgets(qualquer->qualquer.rua, 200, stdin);
    printf("\nDigite o Numero: ");
    scanf(" %d", &qualquer->qualquer.numero);
    printf("\nDigite a Cidade: ");
    fflush(stdin);
    fgets(qualquer->qualquer.cidade, 50, stdin);
}