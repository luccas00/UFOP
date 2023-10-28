#include <stdio.h>

float celsius(float tc)
{
    float tf;
    tf=1.8*tc+32;
    return tf;
}

float fahrenheit(float tf)
{
    float tc;
    tc=(tf-32)/1.8;
    return tc;
}

int main ()
{
    int op;
    float tc, tf;

    printf("\nBem vindo ao programa para conversão de temperatura !!");
    printf("\nDigite a letra correspondente a opçao desejada\n");
    printf("\nA - Celsius para Fahrenheit");
    printf("\nB - Fahrenheit para Celsius");
    scanf(" %d", &op);
    
    switch (op)
    {
        case 'a' || 'A':
            printf("\nDigite a temperatura em Graus Celsius: ");
            scanf("%f", &tc);
            tf=celsius(tc);    
            printf("\nTemperatura em Graus Fahrenheit: %.2f\n", tf);
        break;

        case 'b' || 'B':
            printf("\nDigite a temperatura em Graus Fahrenheit: ");
            scanf("%f", &tf);
            tc=celsius(tf);    
            printf("\nTemperatura em Graus Celsius: %.2f\n", tc);
        break;
    
    default:
        break;
    }



}