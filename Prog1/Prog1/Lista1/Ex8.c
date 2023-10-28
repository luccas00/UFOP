#include <stdio.h>

int main(){
    float Tc, Tf;
    printf("\nDigite a temperatura em Fahrenheit:\n");
    scanf("%f", &Tf);
    Tc=((Tf-32)*5)/9;
    printf("\n\nTemperatura Celcius: %.2f ", Tc);

    return 0;

    }
