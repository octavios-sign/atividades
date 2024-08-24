#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	float base, expo, pote;
	//potencia
	
	//colhendo a base
	printf("digite a base e depois o expoente: \n");
	scanf("%f", &base);
	//colhendo o exponente
	scanf("%f", &expo);
	
	pote = pow(base, expo);
	//o sinal da potencia é  "^"
	printf("a potencia eh: %f", pote);
	

}
