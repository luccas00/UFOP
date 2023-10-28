#include <stdio.h>
#include <stdlib.h>

void swap2x (int *a, int *b);

int main ()
{
    int a, b;

    printf("\nDigite o valor das variaveis A e B, respectivamente\nApenas numeros inteiros\n");
    scanf(" %d%d", &a, &b);
    printf("\nVariavel A = [%d]\nVariavel B = [%d]\n", a, b);
    swap2x(&a, &b);
    printf("\nVariavel A = [%d]\nVariavel B = [%d]\n", a, b);

    printf("\n\n");
    return 0;

}

void swap2x (int *a, int *b)
{
    int temp;
    temp = (*a)*2;
    *a = (*b)*2;
    *b = temp;
}
