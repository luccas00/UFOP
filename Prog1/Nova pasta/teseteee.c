#include <stdio.h>

int main (void) {

    char op;
    int qtd_a=0, qtd_b=0, qtd_c=0, qtd_d=0, qtd_e=0, idade, idade_maior=0, idade_maiorD=0, idade_maiorE=0, soma, media, esp, prc, dif, dif2;

    for(esp=0; esp<=5; esp++)
    {
        printf("\nDigite a sua idade:\n");
        scanf("%d", &idade);

        printf("\nNos conte sua opinião sobre o filme de acordo com a tabela abaixo:\n");
        printf("\nA para Otimo\nB para Bom\nC para Regular\nD para Ruim\nE para Pessimo");
        scanf("%c", &op);


        if(op = 'a')
        {
            qtd_a=qtd_a+1;
            if(idade>=idade_maior)
            {
                idade_maior=idade;
            }
        }
        else if(op = 'b')
        {
            qtd_b=qtd_b+1;
        }
        else if(op = 'c')
        {
            qtd_c=qtd_c+1;
        }
        else if(op = 'd')
        {
            qtd_d=qtd_d+1;
            soma=soma+idade;
            media=soma/qtd_d;
            if(idade>=idade_maiorD)
            {
                idade_maiorD=idade;
            }
        }
        if(op = 'e')
        {
            qtd_e=qtd_e+1;
            if(idade>=idade_maiorE)
            {
                idade_maiorE=idade;
            }
        }

    }

    prc=qtd_e/100;
    dif=qtd_b-qtd_c;
    dif2=idade_maior-idade_maiorD;
    printf("\n\nQuantidade de resposta Otimo: %d", qtd_a);
    printf("\n\nDiferença entre respostas Bom(%d) e Regular(%d): %d", qtd_b, qtd_c, dif);
    printf("\n\nMedia de Idade das pessoas que responderam Ruim: %d", media);
    printf("\n\nPorcentagem de respostas Pessimo: %d", prc);
    printf("\n\nMaior idade que votou Pessimo: %d", idade_maiorE);
    printf("\n\nDiferenca de Idade entre Maior idade que votou Otimo e maior idade que votou Ruim: %d", dif2);

    return 0;
}
