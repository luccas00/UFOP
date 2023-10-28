#include <stdio.h>

int main ()
{
    int n;

    printf("\nDigite a quantidade de numeros:\n");
    scanf("%d", &n);

	int i, vetor[n];

	for (i=0; i<n; i++)
	{
		printf("\nDigite o %d Numero:\n", i);
		scanf(" %d", &vetor[i]);
	}

	for (i=n-1; i>=0; i--)
	{
		printf("Numero: %d\n", vetor[i]);
	}

    return 0;
}