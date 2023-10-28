#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arvoreAlt.h"

int insereNo (treeRoot *master, typeCelula aux) {

    treeRoot *root = master;

    while (root->raiz != NULL)
    {
        if (aux.chave < root->raiz->registro.chave)
        {
            root->raiz = root->raiz->leftNode;
        }
        else if (aux.chave > root->raiz->registro.chave)
        {
            root->raiz = root->raiz->rigthNode;
        }
        else if (aux.chave == root->raiz->registro.chave)
        {
            return 0;
        }   
    }
    root->raiz = newNode(aux);
    return 1;
}

treeNode * newNode (typeCelula x) {

    treeNode *novo_no;
    novo_no = (treeNode *) calloc(1, sizeof(treeNode));
    novo_no->registro = x;
    novo_no->leftNode = NULL;
    novo_no->rigthNode = NULL;

    return (novo_no);

}

// void inOrderRec (treeNode *master) {

//     if (master != NULL)
//     {
//         inOrderRec (master->leftNode);
//         printf("\n - - - ");
//         printf("\nChave: %d", master->registro.chave);
//         printf("\nNome: %s", master->registro.nome);
//         printf("Idade: %d", master->registro.idade);
//         inOrderRec (master->rigthNode);

//     }

// }

void defineCelula (typeCelula *aux) {

    printf("\nDigite a Chave: ");
    scanf(" %d", &aux->chave);
    printf("\nDigite o Nome: ");
    fflush(stdin);
    fgets(aux->nome, 25, stdin);
    printf("\nDigite a Idade: ");
    scanf(" %d", &aux->idade);

}