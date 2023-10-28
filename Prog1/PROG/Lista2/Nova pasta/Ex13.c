#include <stdio.h>
#include <math.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    int nota;
    printf ("\nDigite a nota do aluno\n");
    scanf ("%d", &nota);

    if ((nota == 10) || (nota == 9)){
        printf ("\nConceito A !!\n");
        }

    if ((nota == 8) || (nota == 7)){
        printf ("\nConceito B !\n");
        }

    if ((nota == 6) || (nota == 5)){
        printf ("\nConceito C\n");
        }

    if ((nota < 5) && (nota >= 0)){
        printf ("\nConceito D\n");
        }
    if (nota > 10){
        printf ("\nNota Inválida !\n");
        }
    if (nota < 0){
        printf ("\nNota Inválida !\n");
        }

    return 0;

    }
