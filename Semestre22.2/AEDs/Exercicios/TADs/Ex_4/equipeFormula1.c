#include <stdio.h>
#include "equipeFormula1.h"

void capturaVetorEquipe(equipeFormula1 *qualquer, int tam) {

    printf("\n - - - Definindo Vetor de Equipes - - -\n");

    for (int i = 0; i < tam; i++)
    {

        printf("\n- - - Equipe N[%d] - - -", (i+1));
        printf("\nDigite o nome da Equipe, ");
        fflush(stdin);
        fgets(qualquer[i].nomeEquipe, 40, stdin);
        printf("\nDigite o faturamento anual da Equipe, em dolares\nR$ ");
        scanf(" %f", &qualquer[i].faturamentoAnual);
        printf("\nDefinindo Piloto N1");
        definePiloto(&qualquer[i].piloto_1);
        printf("\nDefinindo Piloto N2");
        definePiloto(&qualquer[i].piloto_2);

    }

}

void definePiloto(piloto *qualquer) {

    printf("\nDigite o Nome do piloto, ");
    fflush(stdin);
    fgets(qualquer->nomePiloto, 70, stdin);
    printf("\nDigite a Idade do piloto, ");
    scanf(" %d", &qualquer->idade);
    printf("\nDigite o salario mensal do piloto, ");
    scanf(" %f", &qualquer->salarioMensal);

}

void imprimePiloto(piloto qualquer) {

    printf("\nNome: %s", qualquer.nomePiloto);
    printf("Idade: %d", qualquer.idade);
    printf("\nSalario Mensal, R$[%.2f]", qualquer.salarioMensal);

}

void imprimeVetorEquipe(equipeFormula1 *qualquer, int tam) {

    for (int i = 0; i < tam; i++)
    {
        printf("\n- - - Equipe N[%d] - - -", (i+1));
        printf("\nNome Equipe: %s", qualquer[i].nomeEquipe);
        printf("Faturamento Anual, R$[%.2f]", qualquer[i].faturamentoAnual);
        printf("\n - Piloto N1 - ");
        imprimePiloto(qualquer[i].piloto_1);
        printf("\n - Piloto N2 - ");
        imprimePiloto(qualquer[i].piloto_2);
        printf("\n");
    }

}

void lucroLiquidoVetorEquipes(equipeFormula1 *qualquer, int tam) {

    float lucro[tam];

    for (int i = 0; i < tam; i++)
    {
        lucro[i] = qualquer[i].faturamentoAnual - ((qualquer[i].piloto_1.salarioMensal*12) + (qualquer[i].piloto_2.salarioMensal*12));
        printf("\n - Lucro da Equipe N[%d] - ", (i+1));
        printf("\nEquipe: %s", qualquer[i].nomeEquipe);
        printf("Lucro, R$[%.2f]\n", lucro[i]);
    }

}

void imprimeMaior_e_MenorSalario(equipeFormula1 *qualquer, int tam) {

    float menorSalario = qualquer[0].piloto_1.salarioMensal;
    float maiorSalario = qualquer[0].piloto_1.salarioMensal;
    int position_maior = 0, position_menor = 0;
    int flag_maior = 0, flag_menor = 0;

    for (int i = 0; i < tam; i++)
    {
        if (qualquer[i].piloto_1.salarioMensal < menorSalario)
        {
            menorSalario = qualquer[i].piloto_1.salarioMensal;
            position_menor = i;
            flag_menor = 1;
        }
        else if (qualquer[i].piloto_2.salarioMensal < menorSalario)
        {
            menorSalario = qualquer[i].piloto_2.salarioMensal;
            position_menor = i;
            flag_menor = 2;
        }

        if (qualquer[i].piloto_1.salarioMensal > maiorSalario)
        {
            maiorSalario = qualquer[i].piloto_1.salarioMensal;
            position_maior = i;
            flag_maior = 1;
        }
        else if (qualquer[i].piloto_2.salarioMensal > maiorSalario)
        {
            maiorSalario = qualquer[i].piloto_2.salarioMensal;
            position_maior = i;
            flag_maior = 2;
        } 
    }

    printf("\n\nPiloto com Maior Salario: ");
    printf("\nSalario R$ %.2f", maiorSalario);

    if (flag_maior == 1)
    {    
        printf("\nNome do Piloto: %s", qualquer[position_maior].piloto_1.nomePiloto);
        printf("Equipe: %s", qualquer[position_maior].nomeEquipe);
    }
    
    if (flag_maior == 2)
    {
        printf("\nNome do Piloto: %s", qualquer[position_maior].piloto_2.nomePiloto);
        printf("Equipe: %s", qualquer[position_maior].nomeEquipe);
    }
    
    printf("\n\nPiloto com Menor Salario: ");
    printf("\nSalario R$ %.2f", menorSalario);

    if (flag_menor == 1)
    {    
        printf("\nNome do Piloto: %s", qualquer[position_menor].piloto_1.nomePiloto);
        printf("Equipe: %s", qualquer[position_menor].nomeEquipe);
    }
    
    if (flag_menor == 2)
    {
        printf("\nNome do Piloto: %s", qualquer[position_menor].piloto_2.nomePiloto);
        printf("Equipe: %s", qualquer[position_menor].nomeEquipe);
    }

}

