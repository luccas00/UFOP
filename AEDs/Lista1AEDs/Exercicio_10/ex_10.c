#include "ex_10.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void FazListaVazia (TypeLista *lista_k) { // Faz a Lista ficar vazia

    lista_k->primeiro = INICIO; // O Primeiro da lista é o inicio
    lista_k->ultimo = lista_k->primeiro; // O ultimo tambem, pois a lista esta vazia

}

int ListaVazia (TypeLista *lista_k) { // Verifica se a lista esta vazia

    return (lista_k->ultimo == lista_k->primeiro); // Se a condiçao for verdadeira retorna 1;

}

int ListaInsere (TypeLista *lista_k, TypeItem x) { // Insere um item na lista

    if (lista_k->ultimo == MAXTAM)  
    {
        return 0; // Lista Cheia
    }
    else
    {
        lista_k->item[lista_k->ultimo++] = x; /*Lista Qualquer, Item posiçao[Ultimo +1], Recebe Item X*/
        return 1; 
    }

}

void RetornaItem (TypeLista *lista_k, TypeApontador p, TypeItem *px) { /*Retorna um item para a Main*/

    if (ListaVazia(lista_k) || p >= lista_k->ultimo)
    {
        printf("\nLista Vazia ou Item Inexistente\n");
    }
    else
    {
        printf("\nRetornando Item");
        *px = lista_k->item[p-1];
    }

}

void ListaCopia (TypeLista *lista_x, TypeLista *lista_y) { /*Lista X recebe Lista Y*/

    if (ListaVazia(lista_x) == 0)
    {
        printf("\nLista de destino não esta vazia");
    }
    else if (ListaVazia(lista_y) == 1)
    {
        printf("\nLista a ser copiada esta vazia");
    }
    else
    {
        for (int i = lista_y->primeiro; i < lista_y->ultimo; i++)
        {
            lista_x->item[i] = lista_y->item[i];
            lista_x->ultimo++;
        }

    }

}


int ListaRetira (TypeLista *lista_k, TypeApontador p, TypeItem *px) { /*Retira um Item da lista, Qual Item*/
    
    if (ListaVazia(lista_k) == 1 || p > lista_k->ultimo)
    {
        printf("\nLista Vazia ou Item Inexistente\n");
        return 0; /*Lista Vazia ou Tentou remover um item alem da lista*/
    }
    else
    {
        printf("\nRetornando Item");
        *px = lista_k->item[p-1];
        while ((p-1) < lista_k->ultimo) // ??
        {
            lista_k->item[p-1] = lista_k->item[p];
            p++;
        }
        lista_k->ultimo--;
        return 1;
    }

}

void ImprimeLista (TypeLista *lista_k) {

    if (ListaVazia(lista_k) == 1)
    {
        printf("\nA Lista esta Vazia\n");
    }
    else
    {
        for (int i = lista_k->primeiro; i < lista_k->ultimo; i++)
        {
            printf("\n- - - - - - - - - -");
            printf("\nNome: %s", lista_k->item[i].nome);
            printf("Chave: %d", lista_k->item[i].chave);
            printf("\nIdade: %d", lista_k->item[i].idade);
        }

    }

}

void ImprimeItem (TypeLista *lista_k, int indice) {

    printf("\n- - - - - - - - - -");
    printf("\nNome: %s", lista_k->item[indice-1].nome);
    printf("Chave: %d", lista_k->item[indice-1].chave);
    printf("\nIdade: %d", lista_k->item[indice-1].idade);

}

void ImprimeItemGenerico (TypeItem item_qualquer) {

    printf("\n- - - - - - - - - -");
    printf("\nNome: %s", item_qualquer.nome);
    printf("Chave: %d", item_qualquer.chave);
    printf("\nIdade: %d", item_qualquer.idade);

}

void Define (TypeItem *item_qualquer) {

    printf("\nDigite o Nome\nMaximo de 20 caracteres\nNome: ");
    fflush(stdin);
    fgets(item_qualquer->nome, 20, stdin);
    printf("\nDigite a Chave: ");
    scanf(" %d", &item_qualquer->chave);
    printf("\nDigite a Idade: ");
    scanf(" %d", &item_qualquer->idade);

}

void TrocaItem (TypeLista *lista_k, TypeApontador m, TypeApontador n) {

    TypeItem aux;

    if (m > lista_k->ultimo || m < lista_k->primeiro)
    {
        printf("\nValor de M Invalido");
    }
    else if (n > lista_k->ultimo || n <lista_k->primeiro)
    {
        printf("\nValor de N Invalido");
    }
    else
    {
        aux = lista_k->item[m];
        lista_k->item[m] = lista_k->item[n];
        lista_k->item[n] = aux;
    }

}

