#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Ex12.h"

void insereNo (treeNode **qualquer, typeItem aux) {

    if ((*qualquer) == NULL)
    {
        (*qualquer) = newNode(aux);
    }

    if (aux.codigo_produto < (*qualquer)->registro.codigo_produto)
    {
        insereNo(&((*qualquer)->leftNode), aux);
    }
    else if (aux.codigo_produto > (*qualquer)->registro.codigo_produto)
    {
        insereNo(&((*qualquer)->rigthNode), aux);
    }

}

treeNode * newNode (typeItem x) {

    treeNode *novo_no;
    novo_no = (treeNode *) calloc(1, sizeof(treeNode));
    novo_no->registro = x;
    novo_no->leftNode = NULL;
    novo_no->rigthNode = NULL;

    return (novo_no);

}

void defineCelula (typeItem *aux) {

    printf("\nDigite o Codigo do Produto: ");
    scanf(" %d", &aux->codigo_produto);
    printf("\nDigite o Preço: ");
    scanf(" %f", &aux->valor);

}

void inOrderRec (treeNode *raiz_x) {

    if (raiz_x != NULL)
    {
        inOrderRec (raiz_x->leftNode);
        printf("\n - - - ");
        printf("\nCodigo do Produto: [%d]", raiz_x->registro.codigo_produto);
        printf("\nValor R$[%.2f]", raiz_x->registro.valor);
        inOrderRec (raiz_x->rigthNode);
        
    }

}

int pesquisa (treeNode *raiz_x, typeItem *k) {

    if (raiz_x == NULL)
    {
        return 0;
    }

    if (k->codigo_produto < raiz_x->registro.codigo_produto)
    {
        return pesquisa (raiz_x->leftNode, k);
    }
    
    if (k->codigo_produto > raiz_x->registro.codigo_produto)
    {
        return pesquisa (raiz_x->rigthNode, k);
    }

    if (k->codigo_produto == raiz_x->registro.codigo_produto)
    {
        *k = raiz_x->registro;
        return 1;
    }
 
}

void preco (treeNode *raiz, typeItem *k) {

    if (pesquisa(raiz, k) == 1)
    {
        printf("\nO Produto[%d] custa R$[%.2f]", k->codigo_produto, k->valor);
    }
    else
    {
        printf("\nProduto[%d] nao encontrado", k->codigo_produto);
    }

}

int retiraNo (treeNode **qualquer, typeItem x) {

    treeNode *aux;

    if (*qualquer == NULL)
    {
        printf("\nProduto[%d] NÃO ENCONTRADO", x.codigo_produto);
        return 0;
    }
    
    if (x.codigo_produto < (*qualquer)->registro.codigo_produto)
    {
        return retiraNo (&(*qualquer)->leftNode, x);
    }

    if (x.codigo_produto > (*qualquer)->registro.codigo_produto)
    {
        return retiraNo (&(*qualquer)->rigthNode, x);
    }

    if (x.codigo_produto == (*qualquer)->registro.codigo_produto)
    {
        if ((*qualquer)->rigthNode == NULL)
        {
            aux = *qualquer;
            *qualquer = (*qualquer)->leftNode;
            free(aux);
            printf("\nProduto[%d] foi removido com sucesso", x.codigo_produto);
            return 1;
        }

        if ((*qualquer)->leftNode == NULL)
        {
            aux = *qualquer;
            *qualquer = (*qualquer)->rigthNode;
            free(aux);
            printf("\nProduto[%d] foi removido com sucesso", x.codigo_produto);
            return 1;
        }

        sucessor(&(*qualquer)->rigthNode, *qualquer);
        printf("\nProduto[%d] foi removido com sucesso", x.codigo_produto);
        return 1;
        
    }
    
}

void sucessor (treeNode **qualquer, treeNode *auxiliar) {

    treeNode *temp;

    if ((*qualquer)->leftNode != NULL)
    {
        sucessor (&(*qualquer)->leftNode, auxiliar);
        return;
    }

    auxiliar->registro = (*qualquer)->registro;
    temp = *qualquer;
    *qualquer = (*qualquer)->rigthNode;
    free(temp);

}

int valor_minimo (treeNode *raiz_k) {

    typeItem temp;
    temp = raiz_k->registro;

    while (raiz_k->leftNode != NULL)
    {
        temp = raiz_k->leftNode->registro;
        return valor_minimo(raiz_k->leftNode);
    }
    
    printf("\n- - Menor valor - -");
    printf("\nProduto[%d], valor R$[%.2f]", temp.codigo_produto, temp.valor);

    return 1;

}

int valor_maximo (treeNode *raiz_k) {

    typeItem temp;
    temp = raiz_k->registro;

    while (raiz_k->rigthNode != NULL)
    {
        temp = raiz_k->rigthNode->registro;
        return valor_maximo(raiz_k->rigthNode);
    }
    
    printf("\n- - Maior valor - -");
    printf("\nProduto[%d], valor R$[%.2f]", temp.codigo_produto, temp.valor);

    return 1;


}