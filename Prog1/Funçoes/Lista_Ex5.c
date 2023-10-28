#include <stdio.h>

void estacao(int dia, int mes);

int main()
{
    int dia=0, mes=0;

    printf("\nDigite o Dia e Mes atual respectivamente\n");
    scanf("%d%d", &dia, &mes);
    estacao(dia, mes);

    printf("\n\n");
    return 0;

}

void estacao(int dia, int mes)
{
    switch (mes)
    {
    case 1:
        printf("\n%d de Janeiro, Verao\n", dia);
        break;

    case 2:
        printf("\n%d de Fevereiro, Verao\n", dia);
        break;

    case 3:
        if (dia >= 21)
        {
            printf("\n%d de Marco, Outono\n", dia);
            break;
        }
        else
        {
            printf("\n%d de Marco, Verao\n", dia);
            break;
        }
    
    case 4:
        printf("\n%d de Abril, Outono\n", dia);
        break;

    case 5:
        printf("\n%d de Maio, Outono\n", dia);
        break;

    case 6:
        if (dia >= 21)
        {
            printf("\n%d de Junho, Inverno\n", dia);
            break;
        }
        else
        {
            printf("\n%d de Junho, Outono\n", dia);
            break;
        }

    case 7:
        printf("\n%d de Julho, Inverno\n", dia);
        break;

    case 8:
        printf("\n%d de Agosto, Inverno\n", dia);
        break;

    case 9:
        if (dia >= 23)
        {
            printf("\n%d de Setembro, Primavera\n", dia);
            break;
        }
        else
        {
            printf("\n%d de Setembro, Outono\n", dia);
            break;
        }

    case 10:
        printf("\n%d de Outubro, Primavera\n", dia);
        break;

    case 11:
        printf("\n%d de Novembro, Primavera\n", dia);
        break;

    case 12:
        if (dia >= 21)
        {
            printf("\n%d de Dezembro, Verao\n", dia);
            break;
        }
        else
        {
            printf("\n%d de Dezembro, Primavera\n", dia);
            break;
        }

    default:
        break;
    }   

}