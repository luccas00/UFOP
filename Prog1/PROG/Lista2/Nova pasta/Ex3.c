#include <stdio.h>
#include <math.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese"); // comentarios
    float a, b, c, x1, x2, aux1, aux2, delta;
    printf ("\nBem vindo ao programa para calculo de equa��es do segundo grau\n");
    printf ("\nDigite os valores de A , B e C respectivamente\n");
    scanf ("%f%f%f", &a, &b, &c);
    delta=(pow(b, 2))-(4*a*c);

    if (delta < 0){
        printf ("\nN�o Existe Solu�ao para esta equa��o\n");
        return 0;
        }

    if (delta == 0){
        printf ("\nEsta equa��o possui apenas uma raiz\n");
        x1=(-b)+sqrt(delta)/(2*a);
        x2=(-b)-sqrt(delta)/(2*a);
        printf ("\nX1 = %.2f\nX2 = %.2f\n", x1, x2);
        return 0;
        }

    if (delta > 0){
        printf ("\nEsta equa��o possui duas raizes\n");
        x1=(-b)+sqrt(delta)/(2*a);
        x2=(-b)-sqrt(delta)/(2*a);
        printf ("\nX1 = %.2f\nX2 = %.2f\n", x1, x2);
        return 0;
        }
    return 0;
    
    }
