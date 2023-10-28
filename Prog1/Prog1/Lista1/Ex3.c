#include <stdio.h>

int main(){
    float gorjeta, total, gastos;
    printf("\nDigite o gasto total\nPara valores nao inteiros utilizar ponto no lugar da virgula\nEx: R$99.90\n\nGastos: ");
    scanf("%f",&gastos);
    gorjeta=gastos*0.1;
    total=gorjeta+gastos;
    printf("\nSubtotal: R$ %.2f\nGorjeta: R$ %.2f\nTotal: R$ %.2f", gastos, gorjeta, total);
    return 0;
}
