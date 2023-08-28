#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include "livro.h"

void define(livro vetor[], int tam) {

    for (int i = 0; i < tam; i++)
    {
        printf("\nDefina o Titulo do %dº Livro: ", i+1);
        fflush(stdin);
        fgets(vetor[i].titulo, 150, stdin);
        printf("\nDefina o Autor do %dº Livro: ", i+1);
        fflush(stdin);
        fgets(vetor[i].autor, 150, stdin);
        printf("\nDefina os ultimos 6 preços do %dº Livro\n", i+1);
        printf("\nPrimeiramente o Preço atual\n");
        fflush(stdin);
        for (int j = 0; j < 6; j++)
        {
            scanf(" %f", &vetor[i].preco[j]);
        }
        
    }

}

void imprime_media(livro vetor[], int tam) {

    float media[tam];
    int i;
    int j;

    for (i = 0; i < tam; i++)
    {
        media[i] = 0;
        for (j = 0; j < 6; j++)
        {
            media[i] += vetor[i].preco[j];
        }
    }

    for (i = 0; i < tam; i++)
    {
        printf("\n- - - - - - -");
        printf("\n%dº Livro", i+1);
        printf("\nMedia = %.2f", (media[i]/6));
    }

}

void livro_caro(livro vetor[], int tam) {
    livro mais_caro[1];
    mais_caro[0] = vetor[0];
    for (int i = 0; i < tam; i++)
    {
        if (vetor[i].preco[0] > mais_caro[0].preco[0])
        {
            mais_caro[0] = vetor[i];
        }
    }

    printf("\n- - - - -");
    printf("\nLivro Mais Caro:");
    printf("\nTitulo: %s", mais_caro[0].titulo);
    printf("Autor: %s", mais_caro[0].autor);
    printf("Preço Atual: %.2f\n", mais_caro[0].preco[0]);

}

void livro_barato(livro vetor[], int tam) {
    livro mais_barato[1];
    mais_barato[0] = vetor[0];
    for (int i = 0; i < tam; i++)
    {
        if (vetor[i].preco[0] < mais_barato[0].preco[0])
        {
            mais_barato[0] = vetor[i];
        }
    }

    printf("\n- - - - -");
    printf("\nLivro Mais Barato:");
    printf("\nTitulo: %s", mais_barato[0].titulo);
    printf("Autor: %s", mais_barato[0].autor);
    printf("Preço Atual: %.2f\n", mais_barato[0].preco[0]);

}

void imprime(livro vetor[], int tam) {
    
    for (int i = 0; i < tam; i++)
    {
        printf("\n- - - - - - -");
        printf("\n%dº Livro -", i+1);
        printf("\nTitulo: %s", vetor[i].titulo);
        printf("Autor: %s", vetor[i].autor);
        printf("Preço Atual: %.2f\n", vetor[i].preco[0]);
    }

}
