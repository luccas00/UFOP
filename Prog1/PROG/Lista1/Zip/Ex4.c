#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    float salario, salarioMin, qtsalarios;
    printf ("\nDigite o valor atual do sal�rio M�nimo\n");
    printf ("\nSal�rio M�nimo em 2021: R$1045,00\n\nR$");
    scanf ("%f", &salarioMin);
    printf ("\nDigite o seu Sal�rio atual\nR$");
    scanf ("%f", &salario);
    qtsalarios=salario/salarioMin;
    printf ("\nVoc� recebe %.2f Salarios Minimos", qtsalarios);

    return 0;
}
