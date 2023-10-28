#include <stdio.h>

void soma(int a, int b)
{
    printf("\nResultado = %d", a+b);
}

int main (void)
{
    int x, y;

    scanf("%d%d", &x, &y);
    soma(x, y);
    soma(2, 2);
    soma(10, 10);

    printf("\n");
    printf("\n");
    
    return 0;

}
