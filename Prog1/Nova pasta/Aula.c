#include <stdio.h>

int main (void) {

	int i, tamanho=5;
	float notas[tamanho];

	for (i=0; i<tamanho; i++)
	{
		printf("\nDigite o valor das posicoes das notas[%d]:\n", i);
		scanf("%f", &notas[i]);
	}

	printf("\nValores lidos:\n");
	for (i=0; i<tamanho; i++)
	{
		printf("\nNotas[%d] = %.2f\n", i, notas[i]);
	}
	return 0;

}