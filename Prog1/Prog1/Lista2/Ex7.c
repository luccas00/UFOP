#include <stdio.h>

int main(){
	int cod;
	float salario_atual, salario_final;
	printf("Informe o seu codigo de funcionario: ");
	scanf("%d", &cod);

	while(cod != 1 && cod != 2 && cod != 3){
		printf("\n!ERRO!\nInforme um valor de 1 a 3!\nTente novamente: ");
		scanf("%d", &cod);
	}

	printf("Agora, informe o seu salario: ");
	scanf("%f", &salario_atual);
	switch(cod){
		case 1:
			salario_final = salario_atual*1.5;
			printf("\nSeu novo salario: R$ %.2f", salario_final);
			break;
		case 2:
			salario_final = salario_atual*1.3;
			printf("\nSeu novo salario: R$ %.2f", salario_final);
			break;
		case 3:
			salario_final = salario_atual*1.2;
			printf("\nSeu novo salario: R$ %.2f", salario_final);
			break;
	}

	return 0;
}
