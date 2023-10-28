#include <stdio.h>
#include <math.h>
#include <locale.h>

#define A 1.5
#define B 4.0
#define C 2.0
#define D 3.0
#define E 1.2
#define F 4.3

int main (){
    setlocale (LC_ALL, "portuguese");
    float W, X, Y, Z;
    printf ("\nAs constantes a seguir ja tem seus valores pre definidos:\n\nA = 1,5\nB = 4\nC = 2\nD = 3\nE = 1,2\nF = 4,3\n");
    printf ("\nExibindo resultado da primeira expressão:\n\n((C+D)*A) / ((E+F)*B) = W\n");
    W=((C+D)*A)/((E+F)*B);
    printf ("\nW = %.2f\n", W);
    printf ("\nExibindo resultado da segunda expressão:\n\n((A^(B+C)) / (E+F)) + D = X\n");
    X=D+((pow(A,(B+C)))/(E+F));
    printf ("\nX = %.2f\n", X);
    printf ("\nExibindo resultado da terceira expressão:\n\n[A + (((C+D)^2) * D) / B^2] * (1/C) = Y\n");
    Y=(1/C)*(A+(D*pow((C+D), C))/(pow(B, C)));
    printf ("\nY = %.2f\n", Y);
    printf ("\nExibindo resultado da quarta expressao:\n\n((-B) + RAIZ DE(B^2-4*A*C)) / (2*A)\n");
    Z=((-B)+sqrt((pow(B, 2))-4*A*C))/(2*A);
    printf ("\nZ = %.2f\n", Z);

    return 0;

}
