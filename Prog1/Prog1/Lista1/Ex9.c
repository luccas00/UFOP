#include <stdio.h>

int main(){
    int T;
    float C, i, M, J;
    printf("\nBem Vindo ao programa de rendimentos a base de juros simples\n");
    printf("\nPrimeiro digite a taxa de juros ao mes com numeros reais: XX%\nEx 10%% = 10, 25%% = 25\n1.25%% = 1.25, 5,5%% = 5.5\n\nTaxa:");
    scanf("%f", &i);
    printf("\nAgora digite por quantos meses o capital ira render:\nObs: numeros inteiros apenas\n\nMeses: ");
    scanf("%d", &T);
    printf("\nEntre com o capital investido:\n\nCapital: ");
    scanf("%f", &C);
    J=C*(i/100)*T;
    M=C+J;
    printf("\n\nCapital Investido: %.2f\n\nJuros Obtidos: %.2f\n\nMontante Final: %.2f\n\n", C, J, M);

    return 0;
}
