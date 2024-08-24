#include <stdio.h>
#include <stdlib.h>

int main(){
	//copiador de string
	char nome[100];
	int idade;
	printf("escreva seu nome completo: ");
	fgets(nome, sizeof(nome), stdin);
	
	printf("agora sua idade: ");
	scanf("%d", &idade);
	
	printf("Ola %s seja bem-vindo ao curso de Algoritmos e Programacao Estruturada. Voce tem %d anos de idade! ", nome, idade );
	
}
