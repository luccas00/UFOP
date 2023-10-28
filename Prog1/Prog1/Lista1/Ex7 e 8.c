#include <stdio.h>

int main(){
    int escolha;
    float Tc, Tf;
    printf("\nEscolha o caminho da convercao desejado\n\nCentigrados para Fahrenheit Digite 1\n\nFahrenheit para Centigrados Digite 2\n");
    scanf("%d", &escolha);

    if (escolha==1)
        {
            printf("\nDigite a Temperatura Celcius:\n ");
            scanf("%f", &Tc);
            Tf=((9*Tc)/5)+32;
            printf("Temperatura em Fahrenheit: %.2f", Tf);
        }
    if (escolha==2)
        {
            printf("\nDigite a Temperatura Fahrenheit:\n");
            scanf("%f", &Tf);
            Tc=((Tf-32)*5)/9;
            printf("Temperatura em Celcius: %.2f", Tc);
        }
        return 0;
}
