#include <stdio.h>
#include <math.h>

#define A 1.5 //Declaraçao de constantes
#define B 4
#define C 2
#define D 3
#define E 1.2
#define F 4.3 //Declaraçao de constantes

int main() {
    float X, Y, Z, W;
    printf("As Constantes a seguir ja tem seus valores pre definidos:\nA = 1,5\nB = 4\nC = 2\nD = 3\nE = 1,2\nF = 4,3\n");
    printf("\nExibindo resultado da primeira expressao A) a*(c+d)/b*(e+f) = X\n");
    X=(A*(C+D))/(B*(E+F));
    printf("\nX =  %f \n", X);
    printf("\nExibindo resultado da segunda expressao B) {[a^(b+c)]/(e+f)}+d = Y\n");
    Y=((pow(A, (B+C)))/(E+F))+D;
    printf("\nY = %f \n", Y);


    return 0;
}
