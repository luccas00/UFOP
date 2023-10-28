#include <stdio.h>

int main (void) {

    float valor, qtd=0, soma=0, media, pos=0, neg=0, percent_pos, percent_neg;

    while (valor!=0)
    {
        printf("\nDigite os valores desejados:\n");
        scanf("%f", &valor);
        soma = soma + valor;
        qtd = qtd + 1;
        if (valor > 0)
        {
            pos=pos+1;
        }
        else
            neg=neg+1;

    }

    media=soma/qtd;
    percent_pos=pos/qtd;
    percent_neg=neg/qtd;

    printf("\nHI\n");


}
