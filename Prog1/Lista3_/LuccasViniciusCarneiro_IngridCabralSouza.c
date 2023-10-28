#include <stdio.h>
#include <locale.h>

int main (void) {

    setlocale(LC_ALL, "portuguese");

    char op;
    int qtd_a=0, qtd_b=0, qtd_c=0, qtd_d=0, qtd_e=0, idade=0, idade_maior=0, idade_maiorD=0, idade_maiorE=0, soma=0, esp, dif, dif2;
    float media=0.0, prc;

    for(esp=0; esp<100; esp++)
    {
        printf("\nDigite a sua idade:\n");
        scanf(" %d", &idade);

        printf("\nNos conte sua opinião sobre o filme de acordo com a tabela abaixo:\n");
        printf("\nA para Otimo\nB para Bom\nC para Regular\nD para Ruim\nE para Pessimo\n");
        scanf(" %c", &op);
        printf("\n\n");

        if(op == 'a' || op == 'A')
        {
            qtd_a=qtd_a+1;
            if(idade>idade_maior)
            {
                idade_maior=idade;
            }
        }
        else if(op == 'b' || op == 'B')
        {
            qtd_b=qtd_b+1;
        }
        else if(op == 'c' || op == 'C')
        {
            qtd_c=qtd_c+1;
        }
        else if(op == 'd' || op == 'D')
        {
            qtd_d=qtd_d+1;
            soma=soma+idade;
            if(idade>idade_maiorD)
            {
                idade_maiorD=idade;
            }
        }
        else if(op == 'e' || op == 'E')
        {
            qtd_e=qtd_e+1;
            if(idade>idade_maiorE)
            {
                idade_maiorE=idade;
            }
        }
        else
        {
            printf("\nResposta Invalida !!\nDigite novamente\n");
            esp--;
        }

    }
    if(qtd_d>0)
    {
        media = (float)soma/qtd_d;
    }
    prc = (float)qtd_e/esp*100;
    dif = qtd_b-qtd_c;
    dif2=idade_maior-idade_maiorD;
    printf("\n\nQuantidade de resposta Otimo: %d", qtd_a);
    printf("\n\nDiferença entre respostas Bom(%d) e Regular(%d): %d", qtd_b, qtd_c, dif);
    printf("\n\nMedia de Idade das pessoas que responderam Ruim: %.2f", media);
    printf("\n\nPorcentagem de respostas Pessimo: %.2f %%", prc);
    printf("\n\nMaior idade que votou Pessimo: %d", idade_maiorE);
    printf("\n\nDiferenca de Idade entre Maior idade que votou Otimo e maior idade que votou Ruim: %d\n", dif2);

    return 0;

}
