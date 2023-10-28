#include <stdio.h>

int main() {
	int anterior=1, atual=1, proximo, total=0, num;
	printf("%d\n", anterior);
	printf("%d\n", atual);
	scanf("%d", &num);
	for (total=1; total<=num; total++) {
		proximo = anterior + atual;
		anterior = atual;
		atual = proximo;
		printf("%d\n", proximo);
	}
	return 0;
}
