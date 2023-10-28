#include <stdio.h>
#include <math.h>

#define P 3.14159 //Declaraçao de constante

int main (){
    float v, r, h;
    printf("\nDigite o raio da lata: ");
    scanf("%f", &r);
    printf("\nDigite a altura: ");
    scanf("%f", &h);
    v=((pow(r,2))*P)*h;
    printf("\nVolume: %.2f ", v);

    return 0;

    }
