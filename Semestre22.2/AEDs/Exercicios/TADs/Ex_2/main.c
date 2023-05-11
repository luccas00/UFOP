#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "pet.h"

int main () {

    pet *x;
    pet *y;

    y = malloc(sizeof(pet));
    x = calloc(3, sizeof(pet));

    captura_pet(&x[0]);
    imprime_pet(x[0]);

    captura_pet(&x[1]);
    imprime_pet(x[1]);

    captura_pet(&x[2]);
    imprime_pet(x[2]);

    media_idade(x, 3);

    free(x);
    free(y);
    
    return 0;

}