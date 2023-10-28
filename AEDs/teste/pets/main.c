#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "pets.h"

int main () {

    pets *x = NULL;
    pets *y = NULL;
    pets *xy = NULL;

    int k;

    int option;

    int idade;
    char sexo;
    char nome[30];

    printf("\nDigite quantos Pets deseja criar:\n");
    scanf(" %d", &k);

    x = calloc(k, sizeof(pets));

    for (int w = 0; w < 2; w++)
    {
        printf("\nDigite a Opçao desejada\n");
        printf("\n1 - Imprimir Informaçoes de todos os Pets");
        printf("\n2 - Definir Informaçoes de um Pet");
        printf("\n3 - Calcular Media de Idade");
        scanf(" %d", &option);

        switch (option)
        {
        case 1:
            for (int i = 0; i < k; i++)
            {
                imprime(x[i], i+1);
            }
            printf("\nDeseja encerrar o programa ?\nY - Yes\nN - No\n");
            char op_1;
            scanf(" %c", &op_1);
            if ((op_1 == 'Y') || (op_1 == 'y'))
            {
                w++;
            }
            else if((op_1 == 'N') || (op_1 == 'n'))
            {
                w--;
            }
            else
            {
                w--;
            }
            break;

        case 2:
            printf("\n");
            int temp;
            printf("\nVoce criou %d Pets, escolha o numero do pet que deseja definir:\n", k);
            scanf(" %d", &temp);
            define(&x[temp-1], temp);
            imprime(x[temp-1], temp);
            printf("\nDeseja encerrar o programa ?\nY - Yes\nN - No\n");
            char op_2;
            scanf(" %c", &op_2);
            if ((op_2 == 'Y') || (op_2 == 'y'))
            {
                w++;
            }
            else if ((op_2 == 'N') || (op_2 == 'n'))
            {
                w--;
            }
            else
            {
                w--;
            }
            break;

        case 3:
            printf("\nImprimindo a Media de Todos os Pets\n");
            float media_temp;
            media_temp = media(x, k);
            printf("\nMedia do Sexo escolhido: %.2f\n", media_temp);
            printf("\nDeseja encerrar o programa ?\nY - Yes\nN - No\n");
            char op_3;
            scanf(" %c", &op_3);
            if ((op_3 == 'Y') || (op_3 == 'y'))
            {
                w++;
            }
            else if((op_3 == 'N') || (op_3 == 'n'))
            {
                w--;
            }
            else
            {
                w--;
            }
            break;
        
        default:
            printf("\nOpçao Invalida, Digite Novamente\n");
            w--;
            break;
        }

    }

    free(x);

    printf("\n\n");
    printf("ClosedNote");
    printf("\n\n");

}