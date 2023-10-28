#include <stdio.h>

int main(){

	float n, num, numA, numB, i;
	printf("Digite quantos termos devem aparecer.\n");
	scanf("%f", &n);
	numA = 1; numB = 0; i = 0;
	while(i < n){
	    printf("%.f, ", numA);
	    num = numA + numB;
	    numB = numA;
	    numA = num;
	    i++;
	 }
}