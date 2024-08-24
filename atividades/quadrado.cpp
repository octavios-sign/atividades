#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float val, tot;
	//val = valor recebido no scanf
	// tot = total quadrado
	
	printf("digite o seu numero: ");
	scanf("%f", &val);
	
	tot = pow(val, 4);
	
	printf("O numero escolhido foi %f e o seu quadrado eh %f", val, tot);
	
}
