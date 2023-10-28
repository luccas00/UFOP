#include <stdio.h>
#include <math.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    float x, y, media, produto, divisao;
    printf ("\nDigite dois numeros inteiros entre 1 e 10\n");
    scanf ("%f%f", &x, &y);
    if ((x > 10) || (y > 10)){
            printf ("\nNumeros não permitidos\n");
            return 0;}

    if ((x < 1) || (y < 1)){
            printf ("\nNumeros não permitidos\n");
            return 0;}

    if (x + y == 8){
        produto=x*y;
        printf ("\nProduto de X e Y é igual a: %.2f \n", produto);}

    if (x + y < 8){
        media=(x+y)/2;
        printf ("\nMédia de X e Y é igual a: %.2f \n", media);}
    if (x + y > 8){
        if (x > y){
            divisao=x/y;
            printf ("\nDivisão do maior pelo menor é igual a: %.2f\n", divisao);}
        if (y > x){
            divisao=y/x;
            printf ("\nDivisão do maior pelo menor é igual a: %.2f\n", divisao);}
        if (y == x){
            divisao=x/y;
            printf ("\nDivisao de X por Y é igual a: %.2f\n", divisao);}
        }
    }


