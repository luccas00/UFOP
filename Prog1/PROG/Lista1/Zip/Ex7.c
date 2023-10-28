#include <stdio.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL, "portuguese");
    float Tc, Tf;
    printf ("\nBem vindo ao programa para conversão de temperaturas!");
    printf ("\nDigite e temperatura em Graus Celcius\n");
    scanf ("%f", &Tc);
    Tf=((9*Tc)/5)+32;
    printf ("\nTemperatura em Fahrenheit: %.2f", Tf);

return 0;

}
