#include <stdio.h>
#include <stdlib.h>
#include "Ex10.h"

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

    printf("\n\n----------\nPre Order");
    preOrderRec(raiz);

    printf("\n----------");
    printf("\nAltura: %d ", altura(raiz));
    printf("\nNumero de Nos: %d ", qtdTreeNode(raiz));
    printf("\nQtd Nos Folha: %d ", numeroNosFolha(raiz));
    printf("\nEsta Completa ? %d ", estaCompleta(raiz));
    printf("\nEsta Balanceada ? %d ", isBalanceada(raiz));
    printf("\nEsta Perfeitamente Balanceada ? %d", isPerfeitamenteBalanceada(raiz));
    
    /*As Funçoes isBalanceada e isPerfeitamenteBalanceada
    considera arvores null ou vazias como balancedas
    e perfeitamente balanceadas - 
    infelizmente nao consegui isolar um caso vazio pois
    utilizo de uma funçao recursiva que a cada nivel faz a verificaçao*/

}