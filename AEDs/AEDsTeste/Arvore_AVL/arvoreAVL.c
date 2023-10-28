#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arvoreAVL.h"

int altura (treeNode *raiz) {

    int alturaDir, alturaEsq;
    if (raiz == NULL) {
        return 0;
    }

    alturaEsq = altura (raiz->leftNode);
    alturaDir = altura (raiz->rigthNode);

    if (alturaEsq > alturaDir)
    {
        return alturaEsq + 1;
    }
    
    else
    {
        return alturaDir + 1;
    }

}

int fatorBalanceamento (treeNode *raiz) {

    if (raiz == NULL)
    {
        return 0;
    }
    
    return altura (raiz->leftNode) - altura (raiz->rigthNode);

}

void rotation_LL (treeNode **raiz) {

    treeNode *treeAux;
    treeAux = (*raiz)->leftNode;
    (*raiz)->leftNode = treeAux->rigthNode;
    treeAux->rigthNode = (*raiz);
    (*raiz) = treeAux;

}

void rotation_RR (treeNode **raiz) {

    treeNode *treeAux;
    treeAux = (*raiz)->rigthNode;
    (*raiz)->rigthNode = treeAux->leftNode;
    treeAux->leftNode = (*raiz);
    (*raiz) = treeAux;

}

void rotation_RL (treeNode **raiz) {

    treeNode *pB, *pC;
    pB = (*raiz)->rigthNode;
    pC = pB->leftNode;
    pB->leftNode = pC->rigthNode;
    pC->rigthNode = pB;
    (*raiz)->rigthNode = pC->leftNode;
    pC->leftNode = (*raiz);
    (*raiz) = pC;

}

void rotation_LR (treeNode** raiz) {

    treeNode *pB, *pC; /* Auxiliares */
    pB = (*raiz)->leftNode;
    pC = pB->rigthNode;
    pB->rigthNode = pC->leftNode;
    pC->leftNode = pB;
    (*raiz)->leftNode = pC->rigthNode;
    pC->rigthNode = (*raiz);
    (*raiz) = pC;

}
