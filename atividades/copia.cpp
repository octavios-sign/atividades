#include <stdio.h>
#include <stdlib.h>

int main(){
	//copiador de string
	char nome[100];
	printf("escreva seu nome completo: ");
	fgets(nome, sizeof(nome), stdin);
	
	printf("Bem vindo(a) %s", &nome);
	
}
