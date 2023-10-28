#include "testeLista.h"
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

void ListaConcatena (TypeLista *lista_destino, TypeLista *lista_origem) {

    for (int i = 0; i < lista_origem->ultimo; i++)
    {
        ListaInsere(lista_destino, lista_origem->item[i]);
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
            printf("\n- - Item %d - -", (i+1));
            printf("\nNome: %s", lista_k->item[i].nome);
            printf("Chave: %d", lista_k->item[i].chave);
            printf("\nIdade: %d\n", lista_k->item[i].idade);
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

void itens_Padrao (TypeLista *lista_k) {

    TypeItem aux;
    
    printf("\nAlocando itens padrão");
    
    aux.chave = 7;
    aux.idade = 900;
    strcpy(aux.nome, "Yoda\n");
    ListaInsere(lista_k, aux);

    aux.chave = 3;
    aux.idade = 55;
    strcpy(aux.nome, "DarthVader\n");
    ListaInsere(lista_k, aux);

    aux.chave = 666;
    aux.idade = 0;
    strcpy(aux.nome, "Anubis\n");
    ListaInsere(lista_k, aux);

    aux.chave = 1;
    aux.idade = 1;
    strcpy(aux.nome, "Osiris\n");
    ListaInsere(lista_k, aux);

    aux.chave = 99;
    aux.idade = 99;
    strcpy(aux.nome, "Goku\n");
    ListaInsere(lista_k, aux);

    aux.chave = 23;
    aux.idade = 54;
    strcpy(aux.nome, "Michael Jordan\n");
    ListaInsere(lista_k, aux);

    aux.chave = 98;
    aux.idade = 66;
    strcpy(aux.nome, "Bill Gates\n");
    ListaInsere(lista_k, aux);

    aux.chave = 9;
    aux.idade = 34;
    strcpy(aux.nome, "Vegeta\n");
    ListaInsere(lista_k, aux);

    aux.chave = 10;
    aux.idade = 87;
    strcpy(aux.nome, "Aragorn\n");
    ListaInsere(lista_k, aux);

    aux.chave = 15;
    aux.idade = 47;
    strcpy(aux.nome, "Frodo\n");
    ListaInsere(lista_k, aux);

    aux.chave = 6;
    aux.idade = 60;
    strcpy(aux.nome, "Loki\n");
    ListaInsere(lista_k, aux);

    aux.chave = 30;
    aux.idade = 450;
    strcpy(aux.nome, "Thor\n");
    ListaInsere(lista_k, aux);

    aux.chave = 36;
    aux.idade = 24;
    strcpy(aux.nome, "Tony Stark\n");
    ListaInsere(lista_k, aux);

    aux.chave = 74;
    aux.idade = 45;
    strcpy(aux.nome, "Steve Rogers\n");
    ListaInsere(lista_k, aux);

    aux.chave = 21;
    aux.idade = 25;
    strcpy(aux.nome, "Nagato\n");
    ListaInsere(lista_k, aux);

    aux.chave = 95;
    aux.idade = 45;
    strcpy(aux.nome, "Madara\n");
    ListaInsere(lista_k, aux);

    aux.chave = 4;
    aux.idade = 55;
    strcpy(aux.nome, "Hashirama\n");
    ListaInsere(lista_k, aux);

    aux.chave = 100;
    aux.idade = 1000;
    strcpy(aux.nome, "Zeus\n");
    ListaInsere(lista_k, aux);

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

void bubbleSort (TypeLista *lista_k) {

    int i, j;
    TypeItem aux;

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
                if (lista_k->item[j].chave < lista_k->item[j-1].chave)
                {
                    aux = lista_k->item[j];
                    lista_k->item[j] = lista_k->item[j-1];
                    lista_k->item[j-1] = aux;
                }

            }

        }

    }

}

void selectionSort(TypeLista *lista_k) {

    int i, j, min;
    TypeItem aux;
    
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
                if (lista_k->item[j].chave < lista_k->item[min].chave)
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

void insertionSort (TypeLista *lista_k) {

    int i, j;
    TypeItem aux;

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
            while (( j > 0) && (aux.chave < lista_k->item[j-1].chave))
            {
                lista_k->item[j] = lista_k->item[j-1];
                j--;
            }
            lista_k->item[j] = aux;
        }

    }

}

void shellSort (TypeLista *lista_k) {

    int i, j, h = 1;
    TypeItem aux;
    do
    {
        h = h * 3 + 1;
    } while (h < lista_k->ultimo);
    do
    {
        h = h/3;
        for (i = h; i < lista_k->ultimo; i++)
        {
            aux = lista_k->item[i];
            j = i;
            while (lista_k->item[j-h].chave > aux.chave)
            {
                lista_k->item[j] = lista_k->item[j-h];
                j = j - h;
                if (j < h)
                {
                    break;
                }
                
            }
            lista_k->item[j] = aux;
        }

    } while (h != 1);

}

void mergeSort (TypeLista *lista_k, int inicio, int fim) {

    if (inicio < fim)
    {
        int meio = (inicio + fim) / 2;

        mergeSort(lista_k, inicio, meio);
        mergeSort(lista_k, (meio+1), fim);

        merge(lista_k, inicio, meio, fim);

    }

}

void merge (TypeLista *lista_k, int inicio, int meio, int fim) {

    TypeItem *aux = (TypeItem*) calloc((fim-inicio+1), sizeof(TypeItem));
    int i = inicio, j = (meio + 1), k = 0;

    while (i <= meio && j <= fim)
    {
        if (lista_k->item[i].chave <= lista_k->item[j].chave)
        {
            aux[k++] = lista_k->item[i++];
        }
        else
        {
            aux[k++] = lista_k->item[j++];
        }
        
    }

    while (i <= meio)
    {
        aux[k++] = lista_k->item[i++];
    }
    while (j <= fim)
    {
        aux[k++] = lista_k->item[j++];
    }
    
    for (i = inicio, k = 0; i <= fim; i++, k++)
    {
        lista_k->item[i] = aux[k];
    }
    
    free(aux);

}

void quickSort () {

    
}