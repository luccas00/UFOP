#include "ex_12.h"
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
    aux.item.chave = 7007;
    insereCelula(qualquer, aux);

    strcpy(aux.item.nome, "Gabriel\n");
    aux.item.idade = 22;
    aux.item.chave = 1111;
    insereCelula(qualquer, aux);

    strcpy(aux.item.nome, "Pedro\n");
    aux.item.idade = 27;
    aux.item.chave = 3003;
    insereCelula(qualquer, aux);

    strcpy(aux.item.nome, "Tiago\n");
    aux.item.idade = 18;
    aux.item.chave = 2222;
    insereCelula(qualquer, aux);

    strcpy(aux.item.nome, "Lucas\n");
    aux.item.idade = 21;
    aux.item.chave = 7777;
    insereCelula(qualquer, aux);

}

void celulasDeItensAuxiliar (array *qualquer) {

    celula aux;
    aux.apontador = NULL;

    strcpy(aux.item.nome, "Maria\n");
    aux.item.idade = 33;
    aux.item.chave = 3333;
    insereCelula(qualquer, aux);

    strcpy(aux.item.nome, "Ana\n");
    aux.item.idade = 32;
    aux.item.chave = 1010;
    insereCelula(qualquer, aux);

    strcpy(aux.item.nome, "Julia\n");
    aux.item.idade = 40;
    aux.item.chave = 9999;
    insereCelula(qualquer, aux);

    strcpy(aux.item.nome, "Carol\n");
    aux.item.idade = 35;
    aux.item.chave = 5555;
    insereCelula(qualquer, aux);

    strcpy(aux.item.nome, "Natalia\n");
    aux.item.idade = 50;
    aux.item.chave = 4545;
    insereCelula(qualquer, aux);

}

void insereLista(array *listaDestino, int indiceDestino, array *listaOrigem, int indiceOrigem, int n) {

    int flagDestino = 0, flagOrigem = 0;

    celula *tempDestino;
    celula *tempDestinoProximo;
    celula *tempOrigem;

    tempDestino = listaDestino->primeiro->apontador;
    for (flagDestino; flagDestino < (indiceDestino-1); flagDestino++)
    {
        tempDestino = tempDestino->apontador;
    }
    tempDestinoProximo = tempDestino->apontador;

    tempOrigem = listaOrigem->primeiro->apontador;
    for (flagOrigem; flagOrigem < (indiceOrigem+n-1); flagOrigem++)
    {
        if (flagOrigem < indiceOrigem-1)
        {
            tempOrigem = tempOrigem->apontador;
        } else {
            (*tempDestino).apontador = (celula *) calloc(1, sizeof(celula));
            tempDestino = tempDestino->apontador;
            (*tempDestino).item = tempOrigem->item;
            tempOrigem = tempOrigem->apontador;
        }

    }
    (*tempDestino).apontador = tempDestinoProximo;

}