#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159

int main(){
	
	float raio, circ;
	printf("digite o raio: ");
	scanf("%f", &raio);
	
	//usar o define
	
	circ = PI * (raio*2);
	
	printf("A circunferencia do circulo e: %f", circ);
	
}
