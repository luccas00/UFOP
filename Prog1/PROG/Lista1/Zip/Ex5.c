#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    float valor, desconto, porcentagem, valorfinal;
    printf ("\nDigite o Valor do produto no qual o desconto irá incidir\nR$");
    scanf ("%f", &valor);
    printf ("\nDigite o valor da porcentagem de desconto desejado\n");
    scanf("%f", &porcentagem);
    valorfinal=valor-(valor*(porcentagem/100));
    printf ("\nO valor do produto com desconto é : R$%.2f ", valorfinal);

    return 0;
}
