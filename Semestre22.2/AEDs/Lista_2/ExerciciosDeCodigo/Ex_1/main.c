#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "Ex1.h"

#define MAXVETORIAL 50

int main () {

    setlocale(LC_ALL, "pt-br");

    char op;

    Lista lista_1, lista_2, lista_3;

    Item item_aux;
    Item vetor[MAXVETORIAL], vetor_2[MAXVETORIAL], vetor_3[MAXVETORIAL];

    int flag_vetor = 0;
    int flag_vetor2 = 0;
    int flag_vetor3 = 0;
    

    printf("\nComeçando as operaçoes com Listas de vetor\n ");
    printf("\nDigite qualquer caractere\n");
    scanf(" %c", &op);

    FazListaVazia(&lista_1);
    FazListaVazia(&lista_2);
    FazListaVazia(&lista_3);

    itens_Padrao(&lista_1);
    itens_Padrao(&lista_2);
    itens_Padrao(&lista_3);

    printf("\n\n- - Lista 1 - -");
    ImprimeLista(&lista_1);
    printf("\n\n- - Lista 2 - -");
    ImprimeLista(&lista_2);
    printf("\n\n- - Lista 3 - -");
    ImprimeLista(&lista_3);

    bubbleSort_lista(&lista_1);
    printf("\n\n- - Imprimindo lista 1 ordenada por BubbleSort- -");
    ImprimeLista(&lista_1);

    insertionSort_lista(&lista_2);
    printf("\n\n- - Imprimindo lista 2 ordenada por InsertionSort- -");
    ImprimeLista(&lista_2);

    selectionSort_lista(&lista_3);
    printf("\n\n- - Imprimindo lista 3 ordenada por SelectionSort- -");
    ImprimeLista(&lista_3);

    printf("\n\n\nComeçando as operaçoes com Vetores Estaticos\n");
    printf("\nDigite qualquer caractere\n");
    scanf(" %c", &op);

    vetor_padrao(vetor, &flag_vetor);
    vetor_padrao(vetor_2, &flag_vetor2);
    vetor_padrao(vetor_3, &flag_vetor3);

    printf("\n\nImprimindo Vetor estatico 1\n");
    imprime_vetor(vetor, flag_vetor);

    printf("\n\nImprimindo Vetor estatico 2\n");
    imprime_vetor(vetor_2, flag_vetor2);

    printf("\n\nImprimindo Vetor estatico 3\n");
    imprime_vetor(vetor_3, flag_vetor3);

    bubbleSort_vetor(vetor, flag_vetor);
    printf("\n\n- - Vetor 1 ordenado por BubbleSort - -");
    imprime_vetor(vetor, flag_vetor);

    insertionSort_vetor(vetor_2, flag_vetor2);
    printf("\n\n- - Vetor 2 ordenado por InsertionSort - -");
    imprime_vetor(vetor_2, flag_vetor2);

    selectionSort_vetor(vetor_3, flag_vetor3);
    printf("\n\n- - Vetor 3 ordenado por SelectionSort\n");
    imprime_vetor(vetor_3, flag_vetor3);

}