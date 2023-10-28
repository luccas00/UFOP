#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "ContaBancaria.h"

#define Senha 7712

ContaBancaria *x=NULL;

int password;
int option;
int w;

void cabecalho() {
    printf("\n------------------------------------------------------------");
    printf("\n---------- Bem Vindo ao Programa do Banco Central ----------");
    printf("\n------------------------------------------------------------\n");
}

void intro() {
    printf("\nEscolha o numero da opção desejada e aperte o Enter\n");
    printf("\n1 - Cliente");
    printf("\n2 - Gerente\n");
}

void main() {

    setlocale(LC_ALL, "pt-BR");

    cabecalho();

    ContaBancaria contas[5];
    int agencia, conta;
    int aux;
    double valor;

    contas[0].agencia=4444;
    contas[0].numero_conta=265526;
    contas[0].saldo=10000;
    contas[0].saldo_investimento=5000;

    contas[1].agencia=4444;
    contas[1].numero_conta=150185;
    contas[1].saldo=50000;
    contas[1].saldo_investimento=100000;

    contas[2].agencia=1515;
    contas[2].numero_conta=269662;
    contas[2].saldo=1000000;
    contas[2].saldo_investimento=1000000;

    contas[3].agencia=4444;
    contas[3].numero_conta=999999;
    contas[3].saldo=500000;
    contas[3].saldo_investimento=100000;

    contas[4].agencia=1515;
    contas[4].numero_conta=123123;
    contas[4].saldo=150000;
    contas[4].saldo_investimento=1000000;

    for (w = 0; w < 2; w++)
    {
        intro();

        scanf(" %d", &option);

        switch (option)
        {
        case 1:
            for (int i = 0; i < 2; i++)
            {
                printf("\nDigite sua Agencia, 4 Digitos\n");
                scanf(" %d", &agencia);

                switch (agencia)
                {
                case 4444:
                    printf("\n");
                    int flag_1;
                    flag_1 = 0;
                    printf("Digite sua Conta, 6 Digitos\n");
                    scanf(" %d", &conta);
                    for (int j = 0; j < 5; j++)
                    {
                        if (conta == contas[j].numero_conta)
                        {
                            imprime(contas[j]);
                            j++;
                        }
                        else
                        {
                            flag_1+=1;
                        }

                        printf("\n");
                        if (flag_1 == 5)
                        {
                            printf("Numero da Conta Invalido\n");
                        }
                    }
                    i++;
                    break;
                
                case 1515:
                    printf("\n");
                    int flag_2;
                    flag_2 = 0;
                    printf("Digite sua Conta, 6 Digitos\n");
                    scanf(" %d", &conta);
                    for (int j = 0; j < 5; j++)
                    {
                        if (conta == contas[j].numero_conta)
                        {
                            imprime(contas[j]);
                            j++;
                        }
                        else
                        {
                            flag_2++;
                        }
                        if (flag_2 == 5)
                        {
                            printf("Numero da Conta Invalido\n");
                        }
                    }
                    i++;
                    break;
                
                default:
                    printf("\nAgencia Invalida\nDigite Novamente\n");
                    i--;
                    break;
                }
            }
            w++;
            break;

        case 2:
            printf("\nDigite a senha:");
            scanf(" %d", &password);
            if (password == Senha)
            {
                int choice;
                int k;

                printf("\nBem vindo ao Programa Gerencial\n");
                printf("Escolha o numero da opção desejada\n");
                printf("1 - Criar conta\n");
                printf("2 - Deletar conta\n");
                printf("3 - Alterar conta\n");
                scanf(" %d", &choice);

                switch (choice)
                {
                case 1:
                    printf("\n");
                    int agencia_1, conta_1, saldo_1;
                    printf("\nDigite quantas contas deseja criar:\n");
                    scanf(" %d", &k);
                    x=calloc(k, sizeof(ContaBancaria));
                    for (int i = 0; i < k; i++)
                    {
                        printf("\nEntre com a Agencia do %dº Cliente", i+1);
                        scanf(" %d", &agencia_1);
                        printf("\nEntre com a Conta do %dº Cliente", i+1);
                        scanf(" %d", &conta_1);
                        printf("\nEntre com o Saldo do %dº Cliente", i+1);
                        scanf(" %d", &saldo_1);
                        inicializa(&x[i], conta_1, agencia_1, saldo_1);
                    }
                    char escolha;
                    printf("\nDeseja encerrar o programa ?\n");
                    printf("[Y - Yes]\n");
                    printf("[N - NO]\n");
                    scanf(" %c", &escolha);
                    if ((escolha == 'Y') || (escolha == 'y'))
                    {
                        w++;
                    }
                    else if ((escolha == 'N') || (escolha == 'n'))
                    {
                        w--;
                    }
                    else
                    {
                        printf("\nOpçao Invalida\n");
                        w--;
                    }
                    break;
                
                case 2:
                    printf("\nDeletar conta\n");
                    w--;
                    break;

                case 3:
                    printf("\nAlterar Conta\n");
                    w--;
                    break;

                default:
                    printf("\nOpçao Invalida, Programa Encerrado\n");
                    w++;
                    break;
                }
            }
            else
            {
                printf("\nSenha Invalida, Autodestruiçao da Maquina em 5 Segundos\n");
            }
            w++;
            break;
    
        default:
            printf("Opçao Invalida\nDigite Novamente\n");
            w--;
            break;
        }
        
    }

    // inicializa(&conta1, 918556, 300.00);

    // deposito(&conta1, 50.00);

    // saque(&conta1, 70.00);

    // imprime(conta1);

    free(x);

    printf("\nClosedNote\n");
    printf("\n\n");

}