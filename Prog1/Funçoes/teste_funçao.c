#include <stdio.h>

int soma(int a, int b)
{
    return(((a*b)+1)*(100/3));
}

int main ()
{
    int x, y, z;

    scanf("%d%d", &x, &y);
    z=soma(x, y);
    printf("\n%d", z);

    z=soma(2, 2);
    printf("\n%d", z);

    z=soma(3, 3);
    printf("\n%d", z);

    z=soma(4, 6);
    printf("\n%d", z);

}
