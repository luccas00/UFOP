#include <stdio.h>
#include <math.h>
#include <locale.h>

int converteIdade (int anos, int meses, int dias){
    int idade;
    idade=dias+(meses*30)+(anos*365);
    return idade;
}

int main (void){
    setlocale(LC_ALL, "portuguese");
    int a, m , d, idade;
    printf("\nInforme sua idade em anos:\n");
    scanf("%d", &a);
    printf("\nInforme sua idade em meses, desconsiderando os anos ja completos:\n");
    scanf("%d", &m);
    printf("\nInforme sua idade em dias, desconsiderando os anos e meses ja completos:\n");
    scanf("%d", &d);
    idade=converteIdade(a, m, d);
    printf("\nSua idade em dias corridos é: %d ", idade);
    return 0;
}
