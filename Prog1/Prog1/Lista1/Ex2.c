#include <stdio.h>

int main (){
    float x, y, soma, produto, divisao, subt;
    printf("\nBem vindo ao programa de calculos basicos\n");
    printf("\n Digite 2 numeros inteiros\n");
    scanf("%f%f",&x,&y);
    soma=x+y;
    subt=x-y;
    produto=x*y;
    divisao=x/y;
    printf("\n%.lf + %.1f = %.1f", x, y, soma);
    printf("\n%.1f - %.1f = %.1f", x, y, subt);
    printf("\n%.1f * %.1f = %.1f", x, y, produto);
    printf("\n%.1f / %.1f = %.1f", x, y, divisao);

    return 0;
}
