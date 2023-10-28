#include <stdio.h>
#include <math.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    int numero;
    printf ("\nDigite um numero inteiro qualquer\n");
    scanf ("%d", &numero);

    if ((numero >= 0) && (numero <= 10)){
        printf ("\nEste numero se encontra entre o grupo de 0 a 10\n");
        }

    if ((numero >= 10) && (numero <= 100)){
        printf ("\nEste numero se encontra entre o grupo de 10 a 100\n");
        }

    if ((numero >=100) && (numero <= 1000)){
        printf ("\nEste numero se encontra entre o grupo de 100 a 1000\n");
        }

    if ((numero >= 1000) && (numero <= 10000)){
        printf ("\nEste numero se encontra entre o grupo de 1000 a 10000\n");
        }

    if ((numero < 0) || (numero > 10000)){
        printf ("\nEste numero nao se encaixa em nenhum dos grupos definidos\n");
        }

    return 0;

    }
