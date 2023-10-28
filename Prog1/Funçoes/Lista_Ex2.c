# include <stdio.h>

int soma1(int q, int c);
int soma2(int ra);

int i = 10;  /* Variaveis Globais (i , j) */
int j = 20; 

int main ()
{
    int i, k, ra, p; // (i, k, ra, p) Variaveis Locais

    p = 10;
    ra = 5;

    for (i = 0; i < 3; i++)
    {
        k = soma1(ra, p);
        ra = soma2(k);
        printf("\n\n[%d]\n[%d]\n\n", ra, k); // 1º[45][25] 2º[85][65] 3º[125][105]
    }
    
    return 0;

}

int soma1(int q, int c) // (soma, q , c) Variaveis locais
{
    int soma = q+i+c;
    return soma;
}

int soma2(int ra) // (ra, k) Variaveis locais
{
    int k = j;
    ra = ra + k;
    return ra;
}

