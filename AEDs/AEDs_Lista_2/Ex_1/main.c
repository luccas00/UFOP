
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "Ex1.h"

#define MAXVETORIAL 50

int main () {

    setlocale(LC_ALL, "pt-br");

    char op;

    Item *alocado_1 = NULL;
    Item *alocado_2 = NULL;
    Lista lista_1, lista_2, lista_3;
    Item item_aux;
    Item vetor[MAXVETORIAL], vetor_2[MAXVETORIAL];
    int flag_vetor = 0;
    int flag_alocador = 0;
    int flag_vetor2 = 0;
    int flag_alocador2 = 0;

    alocado_1 = calloc(MAXVETORIAL, sizeof(Item));
    alocado_2 = calloc(MAXVETORIAL, sizeof(Item));

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

    printf("\nInserindo mais 2 itens na lista 1\nChaves ja usadas: 2, 3, 5, 7, 9\n");
    Define(&item_aux);
    ListaInsere(&lista_1, item_aux);

    Define(&item_aux);
    ListaInsere(&lista_1, item_aux);

    printf("\nInserindo mais 1 itens na lista 2\nChaves ja usadas: 2, 3, 5, 7, 9\n");
    Define(&item_aux);
    ListaInsere(&lista_2, item_aux);
    
    printf("\nInserindo mais 1 itens na lista 3\nChaves ja usadas: 2, 3, 5, 7, 9\n");
    Define(&item_aux);
    ListaInsere(&lista_3, item_aux);

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

    printf("\nInserindo 1 item no vetor estatico 1");
    insere_vetor(vetor, &flag_vetor);

    printf("\n\nImprimindo Vetor estatico 1\n");
    imprime_vetor(vetor, flag_vetor);

    printf("\n\nImprimindo Vetor estatico 2\n");
    imprime_vetor(vetor_2, flag_vetor2);

    bubbleSort_vetor(vetor, flag_vetor);
    printf("\n\n- - Lista Vetorial 1 ordenada por BubbleSort - -");
    imprime_vetor(vetor, flag_vetor);

    insertionSort_vetor(vetor_2, flag_vetor2);
    printf("\n\n- - Lista Vetorial 2 ordenada por InsertionSort - -");
    imprime_vetor(vetor_2, flag_vetor2);



    printf("\n\nOperaçoes com vetores dinamicos");
    printf("\nDigite qualquer caractere\n");
    scanf(" %c", &op);

    vetor_padrao(alocado_1, &flag_alocador);
    vetor_padrao(alocado_2, &flag_alocador2);

    printf("\nImprimindo Vetor dinamico 1\n");
    imprime_vetor(alocado_1, flag_alocador);

    printf("\nImprimindo Vetor dinamico 2\n");
    imprime_vetor(alocado_2, flag_alocador2);

    printf("\nInserindo dois itens no vetor dinamico 2\n");
    insere_vetor(alocado_2, &flag_alocador2);
    insere_vetor(alocado_2, &flag_alocador2);

    bubbleSort_vetor(alocado_1, flag_alocador);
    printf("\n\nVetor Dinamico 1 ordenado por BubbleSort\n");
    imprime_vetor(alocado_1, flag_alocador);

    selectionSort_vetor(alocado_2, flag_alocador2);
    printf("\n\nVetor Dinamico 2 ordenado por SelectionSort\n");
    imprime_vetor(alocado_2, flag_alocador2);

    free(alocado_1);
    free(alocado_2);

}