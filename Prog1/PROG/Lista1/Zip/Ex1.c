#include <stdio.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL, "portuguese");
    int num, numS, numA;
    printf ("\nDigite um número inteiro qualquer para exibir seu sucessor e seu antecessor, respectivamente\n");
    scanf ("%d", &num);
    numS=num+1;
    numA=num-1;
    printf ("\nSucessor é : %d\n\nAntecessor é : %d\n\n", numS, numA);
    return 0;
    }
