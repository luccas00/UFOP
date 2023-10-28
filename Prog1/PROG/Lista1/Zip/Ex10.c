#include <stdio.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL, "portuguese");
    int hora, minutos, Rminutos;
    printf ("\nDigite, respectivamente, As horas e os minutos atuais\n");
    scanf ("%d%d", &hora, &minutos);
    Rminutos=(hora*60)+minutos;
    printf ("\nMinutos passados desde o inicio do dia: %d ", Rminutos);

    return 0;

}
