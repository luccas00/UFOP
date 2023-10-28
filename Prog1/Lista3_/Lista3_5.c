#include <stdio.h>

int main (void) {

    int idade;
    float peso, total = 0;
    char sair, cont;

    printf("\nDigite sua idade: ");
    scanf("%d", &idade);

    if (idade<=30)
    {
        printf("\nIdade Invalida\n");
    }
    else
    {
        printf("\nDigite seu peso: ");
        scanf("%f", &peso);
        total = total + peso;
    }

}
