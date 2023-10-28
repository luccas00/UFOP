#include <stdio.h>
#include "ContaBancaria.h"

void inicializa (ContaBancaria* conta, int numero, double saldo) {
    conta->numero = numero;
    conta->saldo = saldo;
}

void deposito (ContaBancaria* conta, double valor) {
    conta->saldo += valor;
}

void saque (ContaBancaria* conta, double valor) {
    conta->saldo -= valor;
}

void imprime (ContaBancaria conta) {
    printf("Numero: %d\n", conta.numero);
    printf("Saldo: %f\n", conta.saldo);
}