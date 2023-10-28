#include <stdio.h>

int main ()
{
    
    float salario[15];
    char nome[15][20];

    for (int i = 0; i < 15; i++)
    {
        printf("\nDigite seu primeiro nome: ");     
        scanf(" %s", &nome[i]);
        printf("\n%s, digite seu Salario R$ ", nome[i]);
        scanf(" %f", &salario[i]);
    }

    for (int j = 0; j < 15; j++)
    {
        if (salario[j] <= 1212.00) //salario minimo atual R$1212,00
        {
            salario[j]+=(salario[j]*0.15);
        }
        else if ((salario[j] >= 1212.00) && (salario[j] <= 2000.00))
        {
            salario[j]+=(salario[j]*0.07);
        }
        
        printf("\n%s seu novo salario: R$ %.2f", nome[j], salario[j]);
    
    }
    
    return 0;

}
