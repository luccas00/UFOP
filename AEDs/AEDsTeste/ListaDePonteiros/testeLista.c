#include "testeLista.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void FazListaVazia (TypeLista *lista_k) { /*Faz a lista ficar vazia*/

    lista_k->primeira_cel = (TypeCelula *) calloc(1, sizeof(TypeCelula));
    lista_k->ultima_cel = lista_k->primeira_cel;
    lista_k->primeira_cel->prox_cel = NULL;

}

int ListaVazia (TypeLista *lista_k) { /*Verifica se a lista esta vazia*/
    return (lista_k->primeira_cel == lista_k->ultima_cel);
}

void InsereCelula (TypeLista * lista_k, TypeItem *item_x) {
    lista_k->ultima_cel->prox_cel = (TypeCelula *) calloc(1, sizeof(TypeCelula));
    lista_k->ultima_cel = lista_k->ultima_cel->prox_cel;
    lista_k->ultima_cel->item = *item_x;
    lista_k->ultima_cel->prox_cel = NULL;
}
  
int RetiraPrimeiraCelula (TypeLista *lista_k, TypeItem *item_x) {

    TypeCelula *aux;
    if (ListaVazia(lista_k))
    {
        return 0;
    }
    else
    {
        /*
        *item_x = lista_k->primeira_cel->prox_cel->item;
        aux = lista_k->primeira_cel;
        lista_k->primeira_cel = lista_k->primeira_cel->prox_cel;
        free(aux);
        return 1;*/

        *item_x = lista_k->primeira_cel->prox_cel->item;
        aux = lista_k->primeira_cel->prox_cel;
        lista_k->primeira_cel->prox_cel = aux->prox_cel;
        free(aux);
        return 1;
    
    }

}

void insereCelulaPosicionada (array *qualquer, celula celulaBase, int posicao) {

    celula *temp;
    celula *tempProximo;

    temp = qualquer->primeiro->apontador;
    for (int i = 0; i < (posicao-1); i++)
    {
        temp = temp->apontador;
    }
    tempProximo = temp->apontador;

    (*temp).apontador = (celula *) calloc(1, sizeof(celula));
    temp = temp->apontador;
    (*temp).item = celulaBase.item;
    (*temp).apontador = tempProximo;

}

int RetiraUltimaCelula (TypeLista *lista_k, TypeItem *item_x) {

    TypeCelula *aux;
    TypeCelula *temp;

    temp = lista_k->primeira_cel->prox_cel;
    
    if (ListaVazia(lista_k))
    {
        return 0;
    }
    else
    {
        *item_x = lista_k->ultima_cel->item;
        aux = lista_k->ultima_cel;

        while (temp->prox_cel->prox_cel != NULL)
        {
            temp = temp->prox_cel;            
        }

        lista_k->ultima_cel = temp;
        temp->prox_cel = NULL;
        free(aux);
        return 1;

    }

}

void ImprimeLista (TypeLista *lista_k) {
    TypeCelula *aux;
    aux = lista_k->primeira_cel->prox_cel;
    while (aux != NULL)
    {
        printf("\n- - - - -");
        printf("\nNome: %s", aux->item.nome);
        printf("Chave: %d", aux->item.chave);
        printf("\nIdade: %d\n", aux->item.idade);
        aux = aux->prox_cel;
    }

}

void DefineItem (TypeItem *item_x) {

    TypeItem aux;
    printf("\nDigite o nome do Item\n");
    fflush(stdin);
    fgets(aux.nome, 20, stdin);
    printf("\nDigite a Chave: ");
    scanf(" %d", &aux.chave);
    printf("\nDigite a Idade: ");
    scanf(" %d", &aux.idade);
    *item_x = aux;
}
