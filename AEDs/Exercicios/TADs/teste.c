#include <stdio.h>

int main () {
    
    int x;
    printf("\nDigite quantos andares tem o predio\n");
    scanf(" %d", &x);

    int andares[x];

    for (int i = 0; i < x; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf(" %d", ((i+1)*10)+j);
        }
        
    }

}