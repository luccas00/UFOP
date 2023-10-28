#include <stdio.h>

int main (){
    int num, numS, numA;
    printf("\nDigite um numero inteiro qualquer\n");
    scanf("%d",&num);
    numS=num+1;
    numA=num-1;
    printf("\nSucessor: %d\nAntecessor: %d",numS,numA);
    return 0;
    }
