#include <stdio.h>
#include <conio.h>

//Escreva um procedimento que leia seu nome e em uma segunda vari�vel leia seu sobrenome e ao final exiba seu nome concatenado com seu sobrenome.
//Este procedimento dever� ser chamado atrav�s do programa principal.

void nome_sobrenome(){
	
	char nome[50], sobrenome[50];
	
	printf("Digite seu nome: ");
	scanf("%s", nome);
	printf("Digite seu sobrenome: ");
	scanf("%s", sobrenome);
	
	printf("Seu Nome completo eh %s %s", nome, sobrenome);
	
	
}


void main(){
	
	nome_sobrenome();
	
}
