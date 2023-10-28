#include <stdio.h>

int main (void) {

	int i, tam=5;
	float notas[tam];



	for (i=0; i<tam; i++)
	{
		printf("\nDigite o valor da nota[%d]", i+1);
		scanf("%f", &notas[i]);
	}

	printf("\nValores Lidos:\n");
	for (i=0; i<tam; i++)
	{
		printf("\nNota[%d]: %.2f\n", i, notas[i]);
	}

}
