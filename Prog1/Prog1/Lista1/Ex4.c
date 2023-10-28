#include <stdio.h>

int main(){
    float salario, salariomin, quantidade;
    printf("\nDigite o Salario do Funcionario\n Salario: ");
    scanf("%f", &salario);
    printf("\nO Salario Min Atual:R$622.00\nEntre com o Salario Min Atual\n Salario Min: ");
    scanf("%f", &salariomin);
    quantidade=salario/salariomin;
    printf("\nQuantidade de Salarios: %.2f",quantidade);
}
