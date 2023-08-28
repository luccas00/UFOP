#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pet.h"

void captura_pet(pet *qualquer) {

    printf("\nDigite o nome do Pet: ");
    fflush(stdin);
    fgets(qualquer->nome, 31, stdin);
    printf("\nDigite a idade do Pet: ");
    scanf(" %d", &qualquer->idade);
    printf("\nDigite o sexo do Pet\nM - Masculino\nF - Feminino\n");
    scanf(" %c", &qualquer->sexo);

}

void imprime_pet(pet qualquer) {

    printf("\nNome: %s", qualquer.nome);
    printf("Idade: %d", qualquer.idade);
    printf("\nSexo: %c", qualquer.sexo);

}

void media_idade(pet *qualquer, int tam) {

    float media = 0;
    float flag_masc = 0, flag_fem = 0;
    int option;

    printf("\nDigite 1 para calculo da Media de Pets Machos");
    printf("\nDigite 2 para calculo da Media de Pets Femeas");

    scanf(" %d", &option);

    switch (option) 
    {
    case 1:
        for (int i = 0; i < tam; i++)
        {
            if ((qualquer[i].sexo == 'M') || (qualquer[i].sexo == 'm'))
            {
                media = media + qualquer[i].idade;
                flag_masc++;
            }
        }
        media = media/flag_masc;
        printf("\nMedia de Idade de Pets Machos: %.2f", media);
        break;
    
    case 2:
        for (int i = 0; i < tam; i++)
        {
            if ((qualquer[i].sexo == 'F') || (qualquer[i].sexo == 'f'))
            {
                media = media + qualquer[i].idade;
                flag_fem++;
            }
        }
        media = media/flag_fem;
        printf("\nMedia de Idade de Pets Femeas: %.2f", media);
        break;

    default:
        break;
    }

}
