#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado()
{
    int numero_sorteado;
    numero_sorteado = (rand()%6)+1;
    return numero_sorteado;
}

int main()
{
    float n;
    int i;
    int flag[6];

    flag[0]=0;
    flag[1]=0;
    flag[2]=0;
    flag[3]=0;
    flag[4]=0;
    flag[5]=0;

    srand(time(NULL));
    
    printf("\nDigite quantas vezes deseja lancar o dado:\n");
    scanf(" %f", &n);

    float result;

    for (i = 0; i < n; i++)
    {
        result = dado();
        printf("\nNumero Sorteado: [%.f]", result);
    
        if (result == 1)
        {
            flag[0]+=1;
        }
        
        else if (result == 2)
        {
            flag[1]+=1;
        }
        
        else if (result == 3)
        {
            flag[2]+=1;
        }

        else if (result == 4)
        {
            flag[3]+=1;
        }

        else if (result == 5)
        {
            flag[4]+=1;
        }

        else if (result == 6)
        {
            flag[5]+=1;
        }

    }
    
    float per_cent[6];
    float cent;

    cent=100.00;
    per_cent[0]=0;
    per_cent[1]=0;
    per_cent[2]=0;
    per_cent[3]=0;
    per_cent[4]=0;
    per_cent[5]=0;

    for (i = 0; i < 6; i++)
    {
        per_cent[i]=(flag[i]*cent)/n;

        printf("\n[Quantidade de faces N:[%d] = [%d]Unidades, [%.2f%%]Porcentagem", i+1, flag[i], per_cent[i]);
    }
    
    printf("\n\n");
    return 0;
    
}