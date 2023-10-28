#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Ex13.h"

int main () {

    treeNode *raiz = NULL;
    typeCelula aux;
    int op = 1;
    int flag_qtd = 0;

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

    printf("\n\n- - Teste inOrder - -");
    inOrderRec(raiz);

    valor_maximo(raiz);
    valor_minimo(raiz);

    return 0;

}