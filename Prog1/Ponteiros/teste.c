#include <stdio.h>

void troca(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main () {
    int x, y;
    scanf(" %d%d", &x, &y);
    printf("\nTeste 1 [%d], [%d]", x, y);
    troca(&x, &y);
    printf("\nTeste 2 [%d], [%d]", x, y);
    return 0;
}