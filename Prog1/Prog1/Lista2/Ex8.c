#include <stdio.h>

int main(){
	int idade;
	float massa;
	char letra;
	printf("Informe a primeira letra do seu nome: ");
	scanf("%c", &letra);
	printf("Informe seu pesso(kg): ");
	scanf("%f", &massa);
	printf("Informe a sua idade: ");
	scanf("%d", &idade);

	if(idade >= 18 && idade <= 67 && massa > 50){
		printf("\n%c, voce esta apto para doar sangue.", letra);
	}
	else{
		printf("\n%c, voce nao esta apto para doar sangue.", letra);
	}
	return 0;
}
