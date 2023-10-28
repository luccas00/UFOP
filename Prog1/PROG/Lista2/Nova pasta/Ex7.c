#include <stdio.h>
#include <math.h>
#include <locale.h>

#define P 3.14159

int main () {
    setlocale (LC_ALL, "portuguese");
    float area1, perimetro1, area2, perimetro2, areaT, ladoT, ladoQ1, ladoQ2, diagonal;
    int option;
    printf ("\nDigite um numero inteiro qualquer\n");
    scanf ("%d", &option);

    if ((option > 5) || (option <= 0)){
        printf ("\nDigite o valor do lado de um Triangulo Equilatero\n");
        scanf ("%f", &ladoT);
        areaT=(pow(ladoT, 2)*sqrt(3))/4;
        printf ("\nA Area do triangulo é: %.2f", areaT);
        }

    if ((option == 1) || (option == 2)){
        printf ("\nDigite a medida do Lado do Quadrado\n");
        scanf ("%f", &ladoQ1);
        area1=P*(pow((ladoQ1/2), 2));
        perimetro1=(2*P)*(ladoQ1/2);
        printf ("\nA area do Circulo Inscrito é: %.2f\n", area1);
        printf ("\nO Perimetro do Circulo Incrito é: %.2f\n", perimetro1);
        }

    if ((option == 3) || (option == 4) || (option == 5)){
        printf ("\nDigite a medida do Lado do Quadrado\n");
        scanf ("%f", &ladoQ2);
        diagonal=ladoQ2*sqrt(2);
        area2=P*(pow((diagonal/2), 2));
        perimetro2=2*P*(diagonal/2);
        printf ("\nA area do Circulo Circunscrito é: %.2f\n", area2);
        printf ("\nO Perimetro do Circulo Circunscrito é: %.2f\n", perimetro2);
        }

    return 0;

}



