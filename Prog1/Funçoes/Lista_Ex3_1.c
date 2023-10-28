#include <stdio.h>

int main ()
{
    int num, result=0;

    printf("\nDigite o valor de N:\n");
    scanf(" %d", &num);

    for (int i = 1; i <= num; i++)
    {
        result=i+result;
    }
    
    printf("\nSomatorio de %d ate 1 = %d", num, result);
    
    printf("\n\n");
    return 0;

}