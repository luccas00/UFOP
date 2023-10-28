#include <stdio.h>
#include <math.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    int codigo;
    printf ("\nDigite seu código de funcionário\n");
    scanf ("%d", &codigo);
    switch (codigo) {
        case 101:
            printf ("\nCódigo de Vendedor\n");
            break;
        case 102:
            printf ("\nCódigo de Atendente\n");
            break;
        case 103:
            printf ("\nCódigo de Auxiliar Técnico\n");
            break;
        case 104:
            printf ("\nCódigo de Assistente\n");
            break;
        case 105:
            printf ("\nCódigo de Coordenador de Grupo\n");
            break;
        case 106:
            printf ("\nCódigo de Gerente\n");
            break;
        default:
            printf ("\nCódigo Inválido\n");}

    return 0;

    }
