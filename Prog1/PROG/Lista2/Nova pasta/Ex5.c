#include <stdio.h>
#include <math.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    int lado1, lado2, lado3, triangulo;
    printf ("\nDigite os valores dos tres lados do triangulo\n");
    scanf ("%d%d%d", &lado1, &lado2, &lado3);

    if ((lado1 == lado2) && (lado2 == lado3)){
        printf ("\nTriangulo Equilatero\n");
        }

    if ((lado1 != lado2) && (lado2 == lado3)){
        printf ("\nTriangulo Isoceles\n");
        }

    if ((lado1 != lado2) && (lado2 != lado3)){
        printf ("\nTriangulo Escaleno\n");
        }

 return 0;

}
