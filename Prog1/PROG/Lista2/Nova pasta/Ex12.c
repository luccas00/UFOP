#include <stdio.h>
#include <math.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    int codigo;
    printf ("\nDigite seu c�digo de funcion�rio\n");
    scanf ("%d", &codigo);
    switch (codigo) {
        case 101:
            printf ("\nC�digo de Vendedor\n");
            break;
        case 102:
            printf ("\nC�digo de Atendente\n");
            break;
        case 103:
            printf ("\nC�digo de Auxiliar T�cnico\n");
            break;
        case 104:
            printf ("\nC�digo de Assistente\n");
            break;
        case 105:
            printf ("\nC�digo de Coordenador de Grupo\n");
            break;
        case 106:
            printf ("\nC�digo de Gerente\n");
            break;
        default:
            printf ("\nC�digo Inv�lido\n");}

    return 0;

    }
