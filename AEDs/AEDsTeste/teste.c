#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INICIO 0
#define MAXTAM 30

typedef int TypeChave;
typedef int TypeApontador;

typedef struct aluno_est
{   
    TypeChave chave;
    char nome[21];
    int idade;

}aluno;

typedef struct sala_est
{
    aluno alunos[MAXTAM];
    TypeApontador primeiro;
    TypeApontador ultimo;

}sala;

void fazSalaVazia (sala *qualquer);

int salaVazia (sala *qualquer);

int insereAluno (sala *qualquer, aluno aux);

void alunos_Padrao(sala *qualquer);

void imprimeSala(sala *qualquer);

void bubbleSort (sala *qualquer);

void selectionSort (sala *qualquer);

void insertionSort (sala *qualquer);

int main () {

    sala aeds_1, aeds_2, aeds_3;

    fazSalaVazia(&aeds_1);
    fazSalaVazia(&aeds_2);
    fazSalaVazia(&aeds_3);

    imprimeSala(&aeds_1);
    imprimeSala(&aeds_2);
    imprimeSala(&aeds_3);

    alunos_Padrao(&aeds_1);
    alunos_Padrao(&aeds_2);
    alunos_Padrao(&aeds_3);
    
    printf("\nPrimeira Impressao\nAEDs 1\n");
    imprimeSala(&aeds_1);

    printf("\n- - Ordenando - -\n");
    bubbleSort(&aeds_1);
    selectionSort(&aeds_2);
    insertionSort(&aeds_3);

    printf("\n\n- - AEDs 1 - -");
    imprimeSala(&aeds_1);
    printf("\n\n- - AEDs 2 - -");
    imprimeSala(&aeds_2);
    printf("\n\n- - AEDs 3 - -");
    imprimeSala(&aeds_3);

    

}

void fazSalaVazia (sala *qualquer) {

    qualquer->primeiro = INICIO;
    qualquer->ultimo = qualquer->primeiro;

}

int salaVazia (sala *qualquer) {

    return (qualquer->ultimo == qualquer->primeiro);

}

int insereAluno (sala *qualquer, aluno aux) {

    if (qualquer->ultimo == MAXTAM)
    {
        return 0; /*Sala cheia*/
    }
    else
    {
        for (int i = 0; i < qualquer->ultimo; i++)
        {
            if (aux.chave == qualquer->alunos[i].chave)
            {
                printf("Ja existe um item com esta chave");
                return 1;
            }
            
        }

        qualquer->alunos[qualquer->ultimo++] = aux;
        return 1;
    
    }

}

void alunos_Padrao(sala *qualquer) {

    aluno aux;

    aux.chave = 7;
    aux.idade = 900;
    strcpy(aux.nome, "Yoda\n");
    insereAluno(qualquer, aux);

    aux.chave = 1;
    aux.idade = 57;
    strcpy(aux.nome, "DarthVader\n");
    insereAluno(qualquer, aux);

    aux.chave = 3;
    aux.idade = 50;
    strcpy(aux.nome, "Goku\n");
    insereAluno(qualquer, aux);

    aux.chave = 4;
    aux.idade = 100;
    strcpy(aux.nome, "Frezza\n");
    insereAluno(qualquer, aux);

    aux.chave = 2;
    aux.idade = 3214;
    strcpy(aux.nome, "Gandalf\n");
    insereAluno(qualquer, aux);

    aux.chave = 6;
    aux.idade = 1;
    strcpy(aux.nome, "Sauron\n");
    insereAluno(qualquer, aux);

}

void imprimeSala(sala *qualquer) {

    if (salaVazia(qualquer) == 1)
    {
        printf("\nSala Vazia");
    }
    else
    {
        for (int i = qualquer->primeiro; i < qualquer->ultimo; i++)
        {
            printf("\n- - Aluno %d - -", (i+1));
            printf("\nNome: %s", qualquer->alunos[i].nome);
            printf("Chave: %d", qualquer->alunos[i].chave);
            printf("\nIdade: %d\n", qualquer->alunos[i].idade);

        }
    }

}

void bubbleSort (sala *qualquer) {

    int i, j;
    aluno aux;

    if (salaVazia(qualquer) == 1)
    {
        printf("\nSala Vazia, impossivel ordenar por bubbleSort");
    }
    else
    {
        for (i = 0; i < (qualquer->ultimo); i++)
        {
            for (j = (qualquer->ultimo - 1); j > i; j--)
            {
                if (qualquer->alunos[j].chave > qualquer->alunos[j-1].chave)
                {
                    aux = qualquer->alunos[j];
                    qualquer->alunos[j] = qualquer->alunos[j-1];
                    qualquer->alunos[j-1] = aux;
                }

            }

        }

    }

}

void selectionSort(sala *qualquer) {

    int i, j, min;
    aluno aux;
    
    if (salaVazia(qualquer) == 1)
    {
        printf("\nSala Vazia, impossivel ordenar por selectionSort");
    }
    else
    {
        for (i = 0; i < (qualquer->ultimo); i++)
        {
            min = i;
            for (j = (i + 1); j < (qualquer->ultimo); j++)
            {
                if (qualquer->alunos[j].chave > qualquer->alunos[min].chave)
                {
                    min = j;
                }

            }
            aux = qualquer->alunos[min];
            qualquer->alunos[min] = qualquer->alunos[i];
            qualquer->alunos[i] = aux;

        }

    }

}

void insertionSort (sala *qualquer) {

    int i, j;
    aluno aux;

    if (salaVazia(qualquer) == 1)
    {
        printf("\nSala Vazia, impossivel ordenar por insertionSort");
    }
    else
    {
        for (i = 1; i < (qualquer->ultimo); i++)
        {
            aux = qualquer->alunos[i];
            j = i;
            while (( j > 0) && (aux.chave > qualquer->alunos[j-1].chave))
            {
                qualquer->alunos[j] = qualquer->alunos[j-1];
                j--;
            }
            qualquer->alunos[j] = aux;
        }

    }

}