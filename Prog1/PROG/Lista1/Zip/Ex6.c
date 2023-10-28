#include <stdio.h>

int main () {
    int A, B, aux;
    printf("\nDigite as variaveis A e B respectivamente:\n");
    scanf("%d%d", &A, &B);
    printf ("\nA inicial: %d\n\nB inicial: %d\n", A, B);
    aux=A;
    A=B;
    B=aux;
    printf ("\nA final: %d\n\nB final: %d", A, B);

    return 0;

}
