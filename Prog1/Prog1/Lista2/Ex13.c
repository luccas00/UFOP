#include <stdio.h>

int main(){
	float nota;
	printf("\nInforme a nota do aluno: ");
	scanf("%f", &nota);

	if(nota < 5){
		printf("\nConceito D.");}

	else if(nota >= 5 && nota < 7){
		printf("\nConceito C.");}

	else if(nota >= 7 && nota < 9){
		printf("\nConceito B.");}

	else if(nota >= 9 && nota <= 10){
		printf("\nConceito A!");}

	else{
		printf("\nNota invalida");}

	return 0;
}
