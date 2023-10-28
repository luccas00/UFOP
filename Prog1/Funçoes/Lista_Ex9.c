#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado()
{
    int numero_sorteado;
    numero_sorteado = (rand()%6)+1;
    printf("\nNumero sorteado: [%d]", numero_sorteado);
    return numero_sorteado;
}

int main()
{
    int n;

    srand(time(NULL));
    
    printf("\nDigite quantas vezes deseja lancar o dado:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        dado();
    }

    printf("\n\n");
    return 0;
    
}