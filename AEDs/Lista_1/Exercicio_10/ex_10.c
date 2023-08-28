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
        lista_k->item[lista_k->ultimo] = x; /*Lista Qualquer, Item posiçao[Ultimo +1], Recebe Item X*/
        lista_k->ultimo++;
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

void Define (TypeItem *item_qualquer) {

    printf("\nDigite o Nome\nMaximo de 20 caracteres\nNome: ");
    fflush(stdin);
    fgets(item_qualquer->nome, 20, stdin);
    printf("\nDigite a Chave: ");
    scanf(" %d", &item_qualquer->chave);
    printf("\nDigite a Idade: ");
    scanf(" %d", &item_qualquer->idade);

}

void itensPadrao (TypeLista *qualquer) {

    TypeItem x;
    strcpy(x.nome, "Joao\n");
    x.idade = 20;
    x.chave = 1010;
    ListaInsere(qualquer, x);

    strcpy(x.nome, "Maria\n");
    x.idade = 26;
    x.chave = 4545;
    ListaInsere(qualquer, x);

    strcpy(x.nome, "Pedro\n");
    x.idade = 16;
    x.chave = 9999;
    ListaInsere(qualquer, x);

    strcpy(x.nome, "Gabriel\n");
    x.idade = 10;
    x.chave = 3333;
    ListaInsere(qualquer, x);

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

