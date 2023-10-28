#include <stdio.h>

int idade(int a, int m, int d)
{
    int idade;
    idade=(a*365)+(m*30)+d;
    return idade;
}

int main ()
{
    int a, m, d, dias;

    printf("\nDigite sua idade detalhada, Anos, Meses e dias, respectivamente:\n");
    scanf(" %d", &a);
    scanf(" %d", &m);
    scanf(" %d", &d);
    dias=idade(a, m, d);
    printf("\nIdade em dias: %d ", dias);

    printf("\n\n");
    return 0;

}