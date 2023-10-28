#include <stdio.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL, "portuguese");
    float Tc, Tf;
    printf ("\nBem vindo ao programa para conversão de temperaturas!");
    printf ("\nDigite a temperatura em Graus Fahrenheit\n");
    scanf ("%f", &Tf);
    Tc=((Tf-32)*5)/9;
    printf ("\nTemperatura em Celcius: %.2f", Tc);

    return 0;

    }
