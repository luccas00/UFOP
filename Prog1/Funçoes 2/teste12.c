#include <stdio.h>

void troca(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main () {
    int x = 7, y = 20;
    printf("\nTeste 1 [%d], [%d]", x, y);
    troca(&x, &y);
    printf("\nTeste 2 [%d], [%d]", x, y);
    return 0;
}