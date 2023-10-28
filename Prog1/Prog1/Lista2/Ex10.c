#include <stdio.h>

int main(){
	int x, y;
	float resultado;
	printf("\nInforme um valor entre 1 e 10: ");
	scanf("%d", &x);
	printf("\nInforme outro valor entre 1 e 10: ");
	scanf("%d", &y);
	if(x + y < 8){
		resultado = (float)(x + y)/2;
		printf("\nMedia de %d e %d = %.2f", x, y, resultado);
	}
	else if(x + y == 8){
		resultado = x * y;
		printf("\nProduto de %d e %d = %.2f", x, y, resultado);
	}
	else{
		if(x > y){
			resultado = (float)x/y;
			printf("\nDivisao de %d por %d = %.2f", x, y, resultado);
		}
		else if(y > x){
			resultado = (float)y/x;
			printf("\nDivisao de %d por %d = %.2f", y, x, resultado);
		}
		else{
			resultado = (float)x/y;
			printf("\nDivisao de %d por %d = %.2f", x, y, resultado);
		}
	}
	return 0;
}
