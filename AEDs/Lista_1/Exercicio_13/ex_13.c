#include "ex_13.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fazListaVazia (array *qualquer) {

    qualquer->primeiro = (celula *) calloc(1, sizeof(celula));
    qualquer->ultimo = qualquer->primeiro;
    qualquer->primeiro->apontador = NULL;

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

int trocaCelula(array *qualquer, celula *base) {

    celula *sucessorBase = NULL;
    celula *antecessorBase = NULL;

    if (base == NULL)
    {
        printf("falha, celula invalida");
        return 0;
    }

    if (base == qualquer->primeiro->apontador)
    {
        printf("primeiro item");
        
        sucessorBase = base->apontador;

        (*qualquer).primeiro->apontador = &(*sucessorBase);
        (*base).apontador = (*sucessorBase).apontador;
        (*sucessorBase).apontador = &(*base);

        return 1;

    }

    if (base == qualquer->ultimo)
    {
        printf("ultimo item");
        return 1;

    } else {

        /*Encontrando o antecessor e sucessor da celula 'base' */
        sucessorBase = qualquer->primeiro->apontador;
        antecessorBase = qualquer->primeiro;
        do
        {   
            antecessorBase = antecessorBase->apontador;
            sucessorBase = sucessorBase->apontador;
        } while (sucessorBase->apontador != base->apontador);
        sucessorBase = sucessorBase->apontador;

        (*base).apontador = (*sucessorBase).apontador;
        (*sucessorBase).apontador = &(*base);
        (*antecessorBase).apontador = &(*sucessorBase);

        return 1;

    }
    
}