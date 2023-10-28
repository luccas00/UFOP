#include <stdio.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL, "portuguese");
    float J, C, i , T, M;
    printf ("\nBem vindo ao programa para calculo de rendimentos a base de juros Simples !!");
    printf ("\n\nPrimeiro vamos inserir a taxa de juros em porcetagem, para isso digite a taxa de juros com numeros reais\nTaxa de Juros: ");
    scanf ("%f", &i);
    printf ("\n\nAgora digite por quantos meses o capital ira render\nMeses: ");
    scanf ("%f", &T);
    printf ("\n\nAgora entre com o capital investido\nCapital: ");
    scanf ("%f", &C);
    J=C*(i/100)*T;
    M=C+J;
    printf ("\n\nCapital Investido: %.2f\n\nJuros Obtidos: %.2f\n\nMontante Final: %.2f\n\n", C, J, M);

    return 0;

}
