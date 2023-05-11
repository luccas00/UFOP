#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include "livro.h"

int main () {

    setlocale(LC_ALL, "pt-br");

    livro *x = NULL;

    x = calloc(5, sizeof(livro));

    printf("\nImprimindo todos os dados de todos os Livros cadastrados -\n");
    imprime(x, 5);

    define(x, 5);

    printf("\nImprimindo todos os dados de todos os Livros cadastrados -\n");
    imprime(x, 5);
    
    printf("\n\nImprimindo a Media de Preço de cada Livro\n");
    imprime_media(x, 5);
    
    livro_barato(x, 5);
    
    livro_caro(x, 5);

    free(x);
    printf("\nFreeNote");

    printf("\n\n");
    printf("\nClosedNote\n");
    printf("\n");

}

