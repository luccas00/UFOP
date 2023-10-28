#include <stdio.h>
#include <stdlib.h>

int main () {

    struct ficha_aluno
    {
        char nome[20];
        float notas[3];
    };
    struct ficha_aluno aluno;

    int i;

    printf("\n---------- Cadastro Aluno ----------\n");
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

    return 0;
    
}