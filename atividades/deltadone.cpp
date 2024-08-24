#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	//programa que tira o delta
	float a, b, c, delta;
	printf("digite os 3 coeficientes para obter o valor de delta: \n");
	
	scanf("%f", &a);
	printf("agora digite o segundo numero:\n");
	scanf("%f", &b);
	printf("agora digite o terceiro numero:\n");
	scanf("%f", &c);
	//b² -4ac
	delta = (b*b) -(4*a*c);
	printf("o delta eh igual a: %f", delta);
	
	
	
	return 0;
}
