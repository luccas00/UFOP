#include <stdio.h>

int main () {
    int hora, minutos, Minutos;
    printf("\nDigite respectivamente as horas e os minutos atuais:\n");
    scanf("%d%d", &hora, &minutos);
    printf("\n\n %d:%d", hora, minutos);
    Minutos=(hora*60)+minutos;
    printf("\n\nMinutos passados desde o inicio do dia: %d",Minutos);
}
