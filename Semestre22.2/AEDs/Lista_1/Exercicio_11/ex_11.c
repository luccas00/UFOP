#include "ex_11.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fazListaVazia (array *qualquer) {

    qualquer->primeiro = (celula *) calloc(1, sizeof(celula));
    qualquer->ultimo = qualquer->primeiro;
    qualquer->primeiro->apontador = NULL;

}

int listaVazia (array *qualquer) {

    if (qualquer->primeiro == qualquer->ultimo)
    {
        printf("True\n");
        return 1;
    } else {
        printf("False\n");
        return 0;
    }

}

void insereCelula (array *qualquer, celula celulaBase) {

    qualquer->ultimo->apontador = (celula *) calloc(1, sizeof(celula));
    qualquer->ultimo = qualquer->ultimo->apontador;
    qualquer->ultimo->item = celulaBase.item;
    qualquer->ultimo->apontador = NULL;

}

int trocaCelulas (array *qualquer, int a, int b) {  //Troca A e B de posicao

    int flag_a = 0, flag_b = 0;
    int indice = 0;
    celula *aux;
    celula *base;
    celula hold;

    if (a <= 0 || b <= 0)
    {
        printf("falha, indice negativo ou zero\n");
        return 0;
    }
    
    if (qualquer->primeiro->apontador->apontador == NULL)
    {
        printf("falha, apenas 1 elemento na lista\n");
        return 0;

    } else {

        aux = qualquer->primeiro->apontador;
        for (flag_a; flag_a < (a-1); flag_a++)
        {
            aux = aux->apontador;
            if (aux == NULL)
            {
                printf("falha na variavel 'a'\n");
                return 0;
            }
            
        }

        base = qualquer->primeiro->apontador;
        for (flag_b; flag_b < (b-1); flag_b++)
        {
            base = base->apontador;
            if (base == NULL)
            {
                printf("falha na variavel 'b'\n");
                return 0;
            }
        }

        hold.item = (*aux).item;
        (*aux).item = (*base).item;
        (*base).item = hold.item;
        printf("\nSucesso\n");
        return 1;

    }
    
}

void imprimeLista (array qualquer) {

    celula *aux;
    aux = qualquer.primeiro->apontador;
    while (aux != NULL)
    {
        printf("\n- - - - -");
        printf("\nNome: %s", aux->item.nome);
        printf("Chave: %d", aux->item.chave);
        printf("\nIdade: %d\n", aux->item.idade);
        aux = aux->apontador;
    }

}

void defineItem (item *x) {

    item aux;
    printf("\nDigite o nome do Item\n");
    fflush(stdin);
    fgets(aux.nome, 20, stdin);
    printf("\nDigite a Chave: ");
    scanf(" %d", &aux.chave);
    printf("\nDigite a Idade: ");
    scanf(" %d", &aux.idade);
    *x = aux;

}

void celulasDeItensPadrao (array *qualquer) {

    celula aux;
    aux.apontador = NULL;

    strcpy(aux.item.nome, "Joao\n");
    aux.item.idade = 20;
    aux.item.chave = 3333;
    insereCelula(qualquer, aux);

    strcpy(aux.item.nome, "Maria\n");
    aux.item.idade = 22;
    aux.item.chave = 1010;
    insereCelula(qualquer, aux);

    strcpy(aux.item.nome, "Pedro\n");
    aux.item.idade = 27;
    aux.item.chave = 9999;
    insereCelula(qualquer, aux);

    strcpy(aux.item.nome, "Tiago\n");
    aux.item.idade = 10;
    aux.item.chave = 4545;
    insereCelula(qualquer, aux);

}