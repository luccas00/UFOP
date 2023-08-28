#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "equipeFormula1.h"

int main () {

    equipeFormula1 *x;

    x = calloc(4, sizeof(equipeFormula1));

    capturaVetorEquipe(x, 4);
    imprimeVetorEquipe(x, 4);
    lucroLiquidoVetorEquipes(x, 4);
    imprimeMaior_e_MenorSalario(x, 4);

    free(x);
    return 0;

}