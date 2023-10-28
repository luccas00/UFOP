#include <stdio.h>
#include <math.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    int x, y, quadrante;
    printf ("\nDigite os valores do par ordenado (X, Y)\n");
    scanf ("%d%d", &x, &y);

    if ((x > 0) && (y > 0)){
        printf ("\nO par ordenado se encontra no Primeiro Quadrante\n");
        }

    if ((x < 0) && (y > 0)){
        printf ("\nO par ordenado se encontra no Segundo Quadrante\n");
        }

    if ((x < 0) && (y < 0)){
        printf ("\nO par ordenado se encontra no Terceiro Quadrante\n");
        }

    if ((x > 0) && (y < 0)){
        printf ("\nO par ordenado se encontra no Quarto Quadrante\n");
        }

    return 0;

    }
