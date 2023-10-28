#include <stdio.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL, "portuguese");
    float gastos, gorjeta, total;
    printf ("\nDigite o valor total dos gastos\nR$");
    scanf ("%f", &gastos);
    gorjeta=(0.1*gastos);
    total=gorjeta+gastos;
    printf ("\nGastos: R$%.2f\n", gastos);
    printf ("\nGorjeta: R$%.2f\n", gorjeta);
    printf ("\nTotal: R$%.2f\n", total);

    return 0;
}
