#include <stdio.h>

int main (){
    float desconto, valor, total;
    printf("\nDigite o valor do produto\nPara valores nao inteiros utilizar ponto no lugar da virgula\nEx:59.90\nProduto: ");
    scanf("%f", &valor);
    desconto=(valor*0.09);
    total=valor-desconto;
    printf("\nDesconto: %.2f \nValor Antes do Desconto: %.2f \nValor depois do Desconto: %.2f\n",desconto, valor, total);
}
