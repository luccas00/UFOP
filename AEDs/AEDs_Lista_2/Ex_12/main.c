#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Ex12.h"

int main () {


    treeNode *raiz = NULL;
    typeItem aux;
    int op = 1;
    int flag_qtd = 0;

    int qtd_folhas = 0;

    printf("\n- -Adicionando itens - -");
    printf(" - - Registro N%d - - ", (flag_qtd+1));
    printf("\nDigite o numero da opçao desejada\n1 - Adicionar registro\n0 - Encerrar\n");
    scanf(" %d", &op);
    while ((op != 0) && (op == 1))
    {
        defineCelula(&aux);
        insereNo(&raiz, aux);
        flag_qtd++;
        printf(" - - Registro N%d - - ", (flag_qtd+1));
        printf("\nDigite o numero da opçao desejada\n1 - Adicionar registro\n0 - Encerrar\n");
        scanf(" %d", &op);
    }


    printf("\n\n- - Leitura InOrder - -");
    inOrderRec(raiz);

    printf("\n- - Busca de Registros - -");
    printf("\nDigite o numero da opçao desejada\n1 - Procurar registro\n0 - Encerrar\n");
    scanf(" %d", &op);
    while ((op != 0) && (op == 1))
    {
        printf("\nDigite o codigo do produto: ");
        scanf(" %d", &aux.codigo_produto);
        preco(raiz, &aux);
        printf("\nDigite o numero da opçao desejada\n1 - Procurar registro\n0 - Encerrar\n");
        scanf(" %d", &op);
    }

    printf("\n- - Remover Registros - -");
    printf("\nDigite o numero da opçao desejada\n1 - Remover registro\n0 - Encerrar\n");
    scanf(" %d", &op);
    while ((op != 0) && (op == 1))
    {
        printf("\nDigite o codigo do produto: ");
        scanf(" %d", &aux.codigo_produto);
        retiraNo(&raiz, aux);
        printf("\nDigite o numero da opçao desejada\n1 - Remover registro\n0 - Encerrar\n");
        scanf(" %d", &op);
    }

    printf("\n\n- - Leitura InOrder - -");
    inOrderRec(raiz);

    valor_minimo(raiz);
    valor_maximo(raiz);

    printf("\n\n");
    return 0;
    
}