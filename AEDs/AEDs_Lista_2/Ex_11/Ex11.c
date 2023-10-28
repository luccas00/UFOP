#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Ex11.h"

void insereNo (treeNode **qualquer, typeCelula aux) {

    if ((*qualquer) == NULL)
    {
        (*qualquer) = newNode(aux);
    }

    if (aux.chave < (*qualquer)->registro.chave)
    {
        insereNo(&((*qualquer)->leftNode), aux);
    }
    else if (aux.chave > (*qualquer)->registro.chave)
    {
        insereNo(&((*qualquer)->rigthNode), aux);
    }

}

treeNode * newNode (typeCelula x) {

    treeNode *novo_no;
    novo_no = (treeNode *) calloc(1, sizeof(treeNode));
    novo_no->registro = x;
    novo_no->leftNode = NULL;
    novo_no->rigthNode = NULL;

    return (novo_no);

}

void defineCelula (typeCelula *aux) {

    printf("\nDigite a Chave: ");
    scanf(" %d", &aux->chave);
    printf("\nDigite o Nome: ");
    fflush(stdin);
    fgets(aux->nome, 25, stdin);
    printf("\nDigite a Idade: ");
    scanf(" %d", &aux->idade);

}

void preOrderRec (treeNode *raiz_x) {

    if (raiz_x != NULL)
    {
        printf("\n - - - ");
        printf("\nChave: %d", raiz_x->registro.chave);
        printf("\nNome: %s", raiz_x->registro.nome);
        printf("Idade: %d", raiz_x->registro.idade);
        preOrderRec (raiz_x->leftNode);
        preOrderRec (raiz_x->rigthNode);

    }
    
}

int numeroNosFolha (treeNode *raiz_x) {

    if (raiz_x == NULL)
    {
        return 0;
    }
    else if ((raiz_x->leftNode == NULL) && (raiz_x->rigthNode == NULL))
    {
        return 1;
    }
    else
    {
        return numeroNosFolha(raiz_x->leftNode) + numeroNosFolha(raiz_x->rigthNode);
    }

}