#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

int main ()
{
    int x, y;

    printf("\nDigite o valor inicial das variaveis X e Y, respectivamente\n");
    scanf(" %d%d", &x, &y);
    printf("\nTeste 1 [%d], [%d]", x, y);
    swap(&x, &y);
    printf("\nTeste 2 [%d], [%d]", x, y);
    
    printf("\n\n");
    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}