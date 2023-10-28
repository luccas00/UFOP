#include <stdio.h>

int main (void) {

    int valor, dentro_inter = 0, fora_inter = 0, i;

    for (i=1; i<=10; i++)
    {
        printf("Digite o %d valor:\n", i);
        scanf("%d", &valor);
        if (valor>=10 && valor<=20)
        {
            dentro_inter = dentro_inter + 1;
        }
        else
            fora_inter = fora_inter + 1;
    }

    printf("Valores dentro do intervalo: %d\n", dentro_inter);
    printf("Valores fora do intervalo: %d\n", fora_inter);

    return 0;
}
