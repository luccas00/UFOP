#include <stdio.h>

int main (void) {

	int i, tam=5;
	float notas[tam];

	for (i=0; i<tam; i++)
	{
		printf("\nDigite o valor da nota[%d]\n", i+1);
		scanf("%f", &notas[i]);
	}

	printf("Valores Lidos:");
	
	}