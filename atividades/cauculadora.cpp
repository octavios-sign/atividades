#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	//programa de soma subtração e divisão
	float a, b, totalA, totalB, totalC, totalD;
	
	printf("digite abaixo os valores: \n");
	scanf("%f", &a);
	scanf("%f", &b);
	
	totalA = a + b;
	totalB = a - b;
	totalC = a / b;
	totalD = a * b;
	
	printf("a soma dos valores eh: %f \n", totalA);
	printf("a subtracao dos valores eh: %f \n", totalB);
	printf("a divisao dos valores eh: %f \n", totalC);
	printf("a multiplicacao dos valores eh: %f \n", totalD);
	return 0;
}
