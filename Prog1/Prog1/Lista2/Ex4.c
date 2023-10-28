#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
    setlocale(LC_ALL, "portuguese");
    int x;
    printf("\nDigite o numero a ser localizado: \n");
    scanf("%d", &x);

    if (x<0){
        printf("o valor informado é um numero negativo: N = %.2d", x);}

    if (x>=0 && x<=10){
        printf("O valor informado esta entre 0 e 10: N = %.2d", x);}

    if (x>10 && x<=100){
        printf("O valor informado esta entre 10 e 100: N = %.2d", x);}

    if (x>100 && x<=1000){
        printf("O valor informado esta entre 100 e 1.000: N = %.2d", x);}

    if (x>1000 && x<=10000){
        printf("O valor informado esta entre 1.000 e 10.000: N = %.2d", x);}

    if (x>10000){
        printf("O valor informado é maior que 10.000: N = %.2d", x);
    }
    return 0;
}

