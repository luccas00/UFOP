#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    float num1, num2, soma, diferenca, produto, quociente;
    printf ("\nDigite dois numeros quaisquer para obter suas opera��es aritmeticas b�sicas\nSoma, Direfen�a, Produto e Quociente\n");
    scanf ("%f%f", &num1, &num2);
    soma=num1+num2;
    diferenca=num1-num2;
    produto=num1*num2;
    quociente=num1/num2;
    printf ("\n%.1f + %.1f = %.1f", num1, num2, soma);
    printf ("\n%.1f - %.1f = %.1f", num1, num2, diferenca);
    printf ("\n%.1f * %.1f = %.1f", num1, num2, produto);
    printf ("\n%.1f / %.1f = %.1f", num1, num2, quociente);

    return 0;
}
