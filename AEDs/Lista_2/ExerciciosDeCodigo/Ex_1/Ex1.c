
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Ex1.h"

void FazListaVazia (Lista *lista_k) { // Faz a Lista ficar vazia

    lista_k->primeiro = INICIO; // O Primeiro da lista é o inicio
    lista_k->ultimo = lista_k->primeiro; // O ultimo tambem, pois a lista esta vazia

}

int ListaVazia (Lista *lista_k) { // Verifica se a lista esta vazia

    return (lista_k->ultimo == lista_k->primeiro); // Se a condiçao for verdadeira retorna 1;

}

int ListaInsere (Lista *lista_k, Item x) { // Insere um item na lista
    
    if (lista_k->ultimo == MAXTAM)  
    {
        return 0; // Lista Cheia
    }
    else
    {
        for (int i = 0; i < (lista_k->ultimo); i++)
        {
            if (x.chave == lista_k->item[i].chave)
            {
                printf("Ja existe um item com esta chave");
                return 1;
            }
        
        }

        lista_k->item[lista_k->ultimo++] = x; /*Lista Qualquer, Item posiçao[Ultimo +1], Recebe Item X*/
        return 1; 

    }

}

void ImprimeLista (Lista *lista_k) {

    if (ListaVazia(lista_k) == 1)
    {
        printf("\nA Lista esta Vazia\n");
    }
    else
    {
        for (int i = lista_k->primeiro; i < lista_k->ultimo; i++)
        {
            printf("\n- - Item %d - -", (i+1));
            printf("\nNome: %s", lista_k->item[i].nome);
            printf("Chave: %d", lista_k->item[i].chave);
            printf("\nIdade: %d\n", lista_k->item[i].idade);
        }

    }

}

void Define (Item *item_qualquer) {

    printf("\nDigite o Nome\nMaximo de 25 caracteres\nNome: ");
    fflush(stdin);
    fgets(item_qualquer->nome, 25, stdin);
    printf("\nDigite a Chave: ");
    scanf(" %d", &item_qualquer->chave);
    printf("\nDigite a Idade: ");
    scanf(" %d", &item_qualquer->idade);

}

void itens_Padrao (Lista *lista_k) {

    Item aux;
    
    printf("\nAlocando itens padrão");
    
    aux.chave = 5;
    aux.idade = 900;
    strcpy(aux.nome, "Thiago\n");
    ListaInsere(lista_k, aux);

    aux.chave = 3;
    aux.idade = 55;
    strcpy(aux.nome, "Pedro\n");
    ListaInsere(lista_k, aux);

    aux.chave = 7;
    aux.idade = 0;
    strcpy(aux.nome, "Carlos\n");
    ListaInsere(lista_k, aux);

    aux.chave = 9;
    aux.idade = 1;
    strcpy(aux.nome, "Maria\n");
    ListaInsere(lista_k, aux);

    aux.chave = 2;
    aux.idade = 99;
    strcpy(aux.nome, "Ana\n");
    ListaInsere(lista_k, aux);

}

void bubbleSort_lista(Lista *lista_k) {

    int i, j;
    Item aux;

    if (ListaVazia(lista_k) == 1)
    {
        printf("\nLista Vazia, impossivel ordenar por bubbleSort");
    }
    else
    {
        for (i = 0; i < (lista_k->ultimo); i++)
        {
            for (j = (lista_k->ultimo - 1); j > i; j--)
            {
                if (lista_k->item[j].chave > lista_k->item[j-1].chave)
                {
                    aux = lista_k->item[j];
                    lista_k->item[j] = lista_k->item[j-1];
                    lista_k->item[j-1] = aux;
                }

            }

        }

    }

}

void selectionSort_lista(Lista *lista_k) {

    int i, j, min;
    Item aux;
    
    if (ListaVazia(lista_k) == 1)
    {
        printf("\nLista Vazia, impossivel ordenar por selectionSort");
    }
    else
    {
        for (i = 0; i < (lista_k->ultimo); i++)
        {
            min = i;
            for (j = (i + 1); j < (lista_k->ultimo); j++)
            {
                if (lista_k->item[j].chave > lista_k->item[min].chave)
                {
                    min = j;
                }

            }
            aux = lista_k->item[min];
            lista_k->item[min] = lista_k->item[i];
            lista_k->item[i] = aux;

        }

    }

}

void insertionSort_lista(Lista *lista_k) {

    int i, j;
    Item aux;

    if (ListaVazia(lista_k) == 1)
    {
        printf("\nLista Vazia, impossivel ordenar por insertionSort");
    }
    else
    {
        for (i = 1; i < (lista_k->ultimo); i++)
        {
            aux = lista_k->item[i];
            j = i;
            while (( j > 0) && (aux.chave > lista_k->item[j-1].chave))
            {
                lista_k->item[j] = lista_k->item[j-1];
                j--;
            }
            lista_k->item[j] = aux;
        }

    }

}

void bubbleSort_vetor(Item *vetorial, int tam) {

    int i, j;
    Item aux;

    for (i = 0; i < (tam - 1); i++)
    {
        for (j = (tam - 1); j > i; j--)
        {
            if (vetorial[j].chave > vetorial[j-1].chave)
            {
                aux = vetorial[j];
                vetorial[j] = vetorial[j-1];
                vetorial[j-1] = aux;
            }

        }

    }

}

void insertionSort_vetor(Item *vetorial, int tam) {

    int i, j;
    Item aux;

    for (i = 1; i < tam; i++)
    {
        aux = vetorial[i];
        j = i;
        while (( j > 0) && (aux.chave > vetorial[j-1].chave))
        {
            vetorial[j] = vetorial[j-1];
            j--;
        }
        vetorial[j] = aux;
    }

}

void selectionSort_vetor(Item *vetorial, int tam) {

    int i, j, hold;
    Item aux;

    for (i = 0; i < (tam - 1); i++)
    {
        hold = i;
        for (j = (i + 1); j < tam; j++)
        {
            if (vetorial[j].chave > vetorial[hold].chave)
            {
                hold = j;
            }

        }
        aux = vetorial[hold];
        vetorial[hold] = vetorial[i];
        vetorial[i] = aux;

    }

}

void vetor_padrao(Item *vetorial, int *tam) {

    vetorial[0].chave = 10;
    vetorial[0].idade = 10;
    strcpy(vetorial[0].nome, "Joao\n");

    vetorial[1].chave = 15;
    vetorial[1].idade = 20;
    strcpy(vetorial[1].nome, "Pedro\n");

    vetorial[2].chave = 5;
    vetorial[2].idade = 5;
    strcpy(vetorial[2].nome, "Maria\n");

    vetorial[3].chave = 7;
    vetorial[3].idade = 7;
    strcpy(vetorial[3].nome, "Ana\n");

    vetorial[4].chave = 12;
    vetorial[4].idade = 12;
    strcpy(vetorial[4].nome, "Thiago\n");

    *tam = 5;

}

void imprime_vetor(Item *vetorial, int tam) {

    for (int i = 0; i < tam; i++)
    {
        printf("\n- - - - -");
        printf("\nNome: %s", vetorial[i].nome);
        printf("Chave: %d", vetorial[i].chave);
        printf("\nIdade: %d\n", vetorial[i].idade);
    }

}

void insere_vetor(Item *vetorial, int *tam) {
    
    Item aux;

    printf("\nDigite a Chave: ");
    scanf(" %d", &aux.chave);
    printf("\nDigite o Nome: ");
    fflush(stdin);
    fgets(aux.nome, 25, stdin);
    printf("\nDigite a Idade: ");
    scanf(" %d", &aux.idade);

    vetorial[*tam] = aux;
    *tam = *tam + 1;

}