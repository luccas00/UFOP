
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Ex2.h"

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

void itens_Padrao (Lista *lista_k) {

    Item aux;
    
    printf("\nAlocando itens padrão");
    
    aux.chave = 10;
    aux.idade = 1;
    strcpy(aux.nome, "Pedro\n");
    ListaInsere(lista_k, aux);

    aux.chave = 20;
    aux.idade = 2;
    strcpy(aux.nome, "Thiago\n");
    ListaInsere(lista_k, aux);

    aux.chave = 33;
    aux.idade = 3;
    strcpy(aux.nome, "Maria\n");
    ListaInsere(lista_k, aux);

    aux.chave = 44;
    aux.idade = 4;
    strcpy(aux.nome, "Ana\n");
    ListaInsere(lista_k, aux);

    aux.chave = 99;
    aux.idade = 0;
    strcpy(aux.nome, "Marcos\n");
    ListaInsere(lista_k, aux);

}

int conferencia_lista (Lista *lista_k) {

    int aux = 1;

    for (int i = 0; i < (lista_k->ultimo); i++)
    {
        if ((i+1) < (lista_k->ultimo))
        {
            if ((lista_k->item[i+1].chave) < (lista_k->item[i].chave))
            {
                printf("\nLista NAO ORDENADA\n");
                aux = 0;
                return aux;
            }
            else
            {
                aux = 1;
            }
            
        }

    }

    if (aux == 1)
    {
        printf("\nLista ORDENADA");
        return aux;
    }
      
}

int conferencia_vetor (Item *vetorial, int tam) {

    int aux = 1;

    for (int i = 0; i < tam; i++)
    {
        if ((i+1) < tam)
        {
            if (vetorial[i].chave > vetorial[i+1].chave)
            {
                printf("\nVetor NÃO ORDENADO");
                aux = 0;
                return aux;
            }
            else
            {
                aux = 1;
            }
            
        }
        
    }

    if (aux == 1)
    {
        printf("\nVetor ORDENADO");
        return aux;
    }
    
}

void vetor_padrao(Item *vetorial, int *tam) {

    vetorial[0].chave = 3;
    vetorial[0].idade = 3;
    strcpy(vetorial[0].nome, "Joao\n");

    vetorial[1].chave = 4;
    vetorial[1].idade = 4;
    strcpy(vetorial[1].nome, "Pedro\n");

    vetorial[2].chave = 5;
    vetorial[2].idade = 5;
    strcpy(vetorial[2].nome, "Maria\n");

    vetorial[3].chave = 7;
    vetorial[3].idade = 7;
    strcpy(vetorial[3].nome, "Ana\n");

    vetorial[4].chave = 1;
    vetorial[4].idade = 1;
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
