#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Ex13.h"

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

void inOrderRec (treeNode *raiz_x) {

    if (raiz_x != NULL)
    {
        inOrderRec (raiz_x->leftNode);
        printf("\n - - - ");
        printf("\nChave: %d", raiz_x->registro.chave);
        printf("\nNome: %s", raiz_x->registro.nome);
        printf("Idade: %d", raiz_x->registro.idade);
        inOrderRec (raiz_x->rigthNode);

    }
    
}

int valor_minimo (treeNode *raiz_k) {

    typeCelula temp;
    temp = raiz_k->registro;

    while (raiz_k->leftNode != NULL)
    {
        temp = raiz_k->leftNode->registro;
        return valor_minimo(raiz_k->leftNode);
    }
    
    printf("\n- - Menor Chave - -");
    printf("\nNome: %s", temp.nome);
    printf("Chave: %d", temp.chave);
    printf("\nIdade: %d", temp.idade);
    
    return 1;

}

int valor_maximo (treeNode *raiz_k) {

    typeCelula temp;
    temp = raiz_k->registro;

    while (raiz_k->rigthNode != NULL)
    {
        temp = raiz_k->rigthNode->registro;
        return valor_maximo(raiz_k->rigthNode);
    }
    
    printf("\n- - Maior Chave - -");
    printf("\nNome: %s", temp.nome);
    printf("Chave: %d", temp.chave);
    printf("\nIdade: %d", temp.idade);

    return 1;


}