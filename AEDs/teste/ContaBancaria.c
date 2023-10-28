#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "ContaBancaria.h"

void inicializa (ContaBancaria *conta, int numero_conta, int agencia, double saldo) {
    conta->numero_conta = numero_conta;
    conta->agencia = agencia;
    conta->saldo = saldo;
}

void deposito (ContaBancaria *conta, double valor) {
    conta->saldo += valor;
}

void investe (ContaBancaria *conta, double valor) {
    if (valor > conta->saldo)
    {
        printf("\n[Fundos Insuficientes.]\n");
    }
    else
    {
        conta->saldo_investimento += valor;
    } 
}

void saque (ContaBancaria *conta, double valor) {
    if ((conta->saldo - valor) < 0)
    {
        printf("\n[Fundos Insuficientes.]\n");
    }
    else
    {
        conta->saldo-=valor;
    }   
}

void imprime (ContaBancaria conta) {
    printf("\nNumero da Conta: [%d]\n", conta.numero_conta);
    printf("Agencia: [%d]\n", conta.agencia);
    printf("Saldo: R$[%.2f]\n", conta.saldo);
    printf("Saldo Investimento: R$[%.2f]\n\n", conta.saldo_investimento);
}