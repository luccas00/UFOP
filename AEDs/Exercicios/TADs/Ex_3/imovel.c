#include <stdio.h>
#include "imovel.h"

void capturaVetorImovel (imovel *qualquer, int tam) {

    for (int i = 0; i < tam; i++)
    {
        printf("\n- - - - - Imovel N[%d] - - - - -", (i+1));
        printf("\nDigite o nome do Proprietario:\n");
        fflush(stdin);
        fgets(qualquer[i].proprietario, 100, stdin);
        printf("\nDigite o valor do Imovel R$ ");
        scanf(" %f", &qualquer[i].valor);
        printf("\nDigite a area do Imovel, em metros quadrados\nArea: ");
        scanf(" %f", &qualquer[i].area);
        printf("\nDigite a Cidade do Imovel: ");
        fflush(stdin);
        fgets(qualquer[i].localidade.cidade, 50, stdin);
        printf("\nDigite a Rua do Imovel: ");
        fflush(stdin);
        fgets(qualquer[i].localidade.rua, 200, stdin);
        printf("\nDigite o Numero do Imovel: ");
        scanf(" %d", &qualquer[i].localidade.numero);

    }

}

void imprimeVetorImovel (imovel *qualquer, int tam) {

    for (int i = 0; i < tam; i++)
    {
        printf("\n- - - - - Imovel N[%d] - - - - -", (i+1));
        printf("\nProprietario: %s", qualquer[i].proprietario);
        printf("Valor do Imovel R$[%.2f]", qualquer[i].valor);
        printf("\nArea do Imovel m^2[%.2f]", qualquer[i].area);
        printf("\nCidade do Imovel: %s", qualquer[i].localidade.cidade);
        printf("Endereco do Imovel: %s", qualquer[i].localidade.rua);
        printf("Numero do Imovel: [%d]\n", qualquer[i].localidade.numero);

    }

}

void imprimeImovel (imovel qualquer) {

    printf("\nProprietario: %s", qualquer.proprietario);
    printf("Valor do Imovel R$[%.2f]", qualquer.valor);
    printf("\nArea do Imovel m^2[%.2f]", qualquer.area);
    printf("\nCidade do Imovel: %s", qualquer.localidade.cidade);
    printf("Endereco do Imovel: %s", qualquer.localidade.rua);
    printf("Numero do Imovel: [%d]", qualquer.localidade.numero);

}

void vetorImovel_MaisBarato (imovel *qualquer, int tam) {

    float valor = qualquer[0].valor;
    int position = 0;

    for (int i = 0; i < tam; i++)
    {
        if (qualquer[i].valor < valor)
        {
            valor = qualquer[i].valor;
            position = i;
        }
    }

    printf("\n\n - Imovel mais barato - \n");
    imprimeImovel(qualquer[position]);

}
