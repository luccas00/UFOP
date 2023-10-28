#include <stdio.h>
#include <stdlib.h>

struct ficha_aluno
    {
        char nome[20];
        float notas[3];
    };
    struct ficha_aluno aluno;

void nome_nota(struct ficha_aluno vetor[], int qtd)
{
    int i, k;

    for (k = 0; k < qtd; k++)
    {

    printf("\nDigite o nome do aluno:\n");
    fflush(stdin);
    fgets(aluno.nome, 20, stdin);

    printf("\nDigite as tres notas:\n");
    fflush(stdin);

    for (i = 0; i < 3; i++)
    {
        scanf(" %f", &aluno.notas[i]);
    }

    printf("\nNome: %s", aluno.nome);

    for (i = 0; i < 3; i++)
    {
        printf("\nNotas: %.2f", aluno.notas[i]);
    }

    }

}

int main () {

    struct ficha_aluno vetor[3];

    int qtd;

    printf("\nDigite a quantidade de alunos a se avaliar:\n");
    scanf(" %d", &qtd);

    nome_nota(vetor, qtd);

    return 0;
}