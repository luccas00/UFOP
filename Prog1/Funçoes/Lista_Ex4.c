#include <stdio.h>

char conceito(char nota)
{
    char conceito;

    if ((nota >= 0) && (nota <= 49))
    {
        conceito = 'D';
        return conceito;
    }

    else if ((nota >= 50) && (nota <= 69))
    {
        conceito = 'C';
        return conceito;
    }
    else if ((nota >= 70) && (nota <= 89))
    {
        conceito = 'B';
        return conceito;
    }

    else if ((nota >= 90) && (nota <= 100))
    {
        conceito = 'A';
        return conceito;
    }
    
}

int main ()
{
    int i;
    int media;
    char result, op;

    for (i = 0; i < 2; i++)
    {
        printf("\nDigite a Media final do aluno:\n");
        scanf(" %d", &media);
        result = conceito(media);
        printf("\nConceito do aluno %c", result);

        printf("\n\n");

        printf("\nDigite Z para uma nova leitura");
        printf("\nEntre com qualquer tecla para encerrar\n");
        scanf(" %c", &op);

        if ((op == 'z') || (op == 'Z'))
        {
            i--;
        }

        else
        {
            i++;
        }

    }

    printf("\n\n");
    return 0;

}