#include <stdio.h>

int soma1(int q, int c); // Variavel Global
int soma2(int ra); // Variavel Global
int i = 10;
int j = 20;

int main(){
    int i, k, ra, p; // Variaveis Locais
    p = 10;
    ra = 5;
    for(i = 0; i< 3; i++){
        k = soma1(ra, p);  // (k = 5+10 = 15)
        ra = soma2(k);  // (ra = k = 15)
        printf("%d , %d \n", ra, k);} // Sera exibido na tela os numeros
        return 0;}

    int soma1 (int q, int c){ //Variaveis Locais
    int soma = q+i+c;
    return soma;}

    int soma2 (int ra){ // Variaveis Locais
    int k = j;
    ra=ra+k;
    return ra;}
