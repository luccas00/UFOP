#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "Ex10.h"

void insereNo (treeNode **qualquer, typeCelula aux) {

    if ((*qualquer) == NULL)
    {
        (*qualquer) = newNode(aux);
    }

    if (aux.chave < (*qualquer)->registro.chave)
    {
        insereNo(&((*qualquer)->esquerda), aux);
    }
    else if (aux.chave > (*qualquer)->registro.chave)
    {
        insereNo(&((*qualquer)->direita), aux);
    }

}

treeNode * newNode (typeCelula x) {

    treeNode *novo_no;
    novo_no = (treeNode *) calloc(1, sizeof(treeNode));
    novo_no->registro = x;
    novo_no->esquerda = NULL;
    novo_no->direita = NULL;

    return (novo_no);

}

void defineCelula (typeCelula *aux) {

    printf("\nDigite a Chave: ");
    scanf(" %d", &aux->chave);
    aux->idade = aux->chave;
}

void preOrderRec (treeNode *raiz) {

    if (raiz != NULL)
    {
        printf("\n - - - ");
        printf("\nChave: %d", raiz->registro.chave);
        printf("\nIdade: %d", raiz->registro.idade);
        preOrderRec (raiz->esquerda);
        preOrderRec (raiz->direita);

    }
    
}

int altura(treeNode *raiz) {

    if (raiz == NULL) {
        return -1;
    } else {
        int alturaEsquerda = altura(raiz->esquerda);
        int alturaDireita = altura(raiz->direita);

        if (alturaEsquerda > alturaDireita)
            return (alturaEsquerda + 1);
        else
            return (alturaDireita + 1);
    }
}

int qtdTreeNode(treeNode *raiz) {
    if (raiz == NULL) {
        return 0;
    }
    int qtdEsquerda = qtdTreeNode(raiz->esquerda);
    int qtdDireita = qtdTreeNode(raiz->direita);
    return qtdEsquerda + qtdDireita + 1;
}

int isBalanceada(treeNode *raiz) {
    
    /*A funçao reconhece uma arvore Vazia ou NULL como Balanceada*/
    
    if (raiz == NULL) {
        return 1;
    }

    if (qtdTreeNode(raiz) == 1 && altura(raiz) == 0)
    {
        return 1;
    }
    
    int alturaEsquerda = altura(raiz->esquerda);
    int alturaDireita = altura(raiz->direita);
    if (abs(alturaEsquerda - alturaDireita) <= 1 && isBalanceada(raiz->esquerda) && isBalanceada(raiz->direita)) {
        return 1;
    }
    return 0;
}

int isPerfeitamenteBalanceada(treeNode *raiz) {

    /*A funçao reconhece uma arvore Vazia ou NULL como Perfeitamente Balanceada*/

    if (raiz == NULL) {
        return 1;
    }

    if (qtdTreeNode(raiz) == 1 && altura(raiz) == 0)
    {
        return 1;
    }
    
    int qtdEsquerda = qtdTreeNode(raiz->esquerda);
    int qtdDireita = qtdTreeNode(raiz->direita);
    if (abs(qtdEsquerda - qtdDireita) <= 1 && isPerfeitamenteBalanceada(raiz->esquerda) && isPerfeitamenteBalanceada(raiz->direita)) {
        return 1;
    }
    return 0;
}

int estaCompleta(treeNode *raiz) {

    if (raiz == NULL) {
        return 0;
    }

    int alt = altura(raiz);
    int qtd = qtdTreeNode(raiz);

    int qtdMaximaDeNos = pow(2, alt+1)-1;

    if (qtdMaximaDeNos == qtd) {
        return 1;
    }

    return 0;
 
}

int numeroNosFolha (treeNode *raiz) {

    if (raiz == NULL)
    {
        return 0;
    }

    if ((raiz->esquerda == NULL) && (raiz->direita == NULL))
    {
        return 1;
    }

    return numeroNosFolha(raiz->esquerda) + numeroNosFolha(raiz->direita);

}

