#include <stdio.h>

int main(){
	int codigo;
	printf("Informe o seu codigo de funcionario: ");
	scanf("%d", &codigo);
	switch (codigo){
		case 101:
			printf("\nVendedor.");
		break;

		case 102:
			printf("\nAtendente.");
		break;

		case 103:
			printf("\nAuxiliar Tecnico.");
		break;

		case 104:
			printf("\nAssitente.");
		break;

		case 105:
			printf("\nCoordenador de Grupo.");
		break;

		case 106:
			printf("\nGerente.");
		break;

		default:
			printf("\nCodigo invalido!");
	}

	return 0;
}
