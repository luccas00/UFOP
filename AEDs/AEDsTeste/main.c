#include <stdio.h>

int fatorial (int num);

int main () {

    int aux;

    scanf("%d", &aux);

    aux = fatorial(aux);

    printf("\n\n[%d]", aux);

}

int fatorial (int num) {

    if (num <= 1)
    {
        return 1;
    }
    else
    {
        return num * fatorial(num-1);
    }

}