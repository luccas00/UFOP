#include <stdio.h>
#include "ContaBancaria.h"

void main() {

    ContaBancaria conta1;

    inicializa( &conta1, 918556, 300.00);
    printf( "Antes da movimentacao:\n ");
    imprime( conta1 );
    deposito( &conta1, 50.00 );
    saque( &conta1, 70.00 );
    printf( "Depois da movimentacao:\n ");
    imprime( conta1 );

}