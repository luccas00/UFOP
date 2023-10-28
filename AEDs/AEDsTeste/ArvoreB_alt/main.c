#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arvoreAlt.h"

int main () {

    treeRoot master;
    typeCelula aux;
    int op = 1;
    int flag_qtd = 0;

    printf(" - - Registro N%d - - ", (flag_qtd+1));
    printf("\nDigite o numero da opçao desejada\n1 - Adicionar registro\n0 - Encerrar\n");
    scanf(" %d", &op);

    while ((op != 0) && (op == 1))
    {
        defineCelula(&aux);
        insereNo(&master, aux);
        flag_qtd++;
        printf(" - - Registro N%d - - ", (flag_qtd+1));
        printf("\nDigite o numero da opçao desejada\n1 - Adicionar registro\n0 - Encerrar\n");
        scanf(" %d", &op);
    }

    printf("\nNome: %s", master.raiz->registro.nome);
    printf("\nChave: %d", master.raiz->registro.chave);
    printf("\nIdade: %d", master.raiz->registro.idade);

    
    printf("\nNome: %s", master.raiz->leftNode->registro.nome);
    printf("\nChave: %d", master.raiz->leftNode->registro.chave);
    printf("\nIdade: %d", master.raiz->leftNode->registro.idade);

    
    printf("\nNome: %s", master.raiz->rigthNode->registro.nome);
    printf("\nChave: %d", master.raiz->rigthNode->registro.chave);
    printf("\nIdade: %d", master.raiz->rigthNode->registro.idade);


    return 0;

}