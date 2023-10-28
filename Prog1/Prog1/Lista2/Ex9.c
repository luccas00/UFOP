#include <stdio.h>

int main(){
	int x, y;
	printf("Informe o valor de x: ");
	scanf("%d", &x);
	printf("Informe o valor de y: ");
	scanf("%d", &y);
	if(x == 0 && y == 0){
		printf("\nPonto de origem do plano cartesiano(%d, %d)", x, y);
	}
	else if(x > 0 && y > 0){
		printf("\nO ponto(%d, %d) pertecem ao 1 Quadrante.", x, y);
	}
	else if(x > 0 && y < 0){
		printf("\nO ponto(%d, %d) pertecem ao 4 Quadrante.", x, y);
	}
	else if(x < 0 && y > 0){
		printf("\nO ponto(%d, %d) pertecem ao 2 Quadrante.", x, y);
	}
	else if(x < 0 && y < 0){
		printf("\nO ponto(%d, %d) pertecem ao 3 Quadrante.", x, y);
	}
	else if(x == 0 && y > 0){
		printf("\nO ponto(%d, %d) pertecem ao 1 e 2 Quadrantes.", x, y);
	}
	else if(x == 0 && y < 0){
		printf("\nO ponto(%d, %d) pertecem ao 3 e 4 Quadrantes.", x, y);
	}
	else if(x > 0 && y == 0){
		printf("\nO ponto(%d, %d) pertecem ao 1 e 4 Quadrantes.", x, y);
	}
	else{
		printf("\nO ponto(%d, %d) pertecem ao 2 e 3 Quadrantes.", x, y);
	}

	return 0;
}
