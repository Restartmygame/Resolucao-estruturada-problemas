#include <stdio.h>
#include <conio.h>

//-2 Escreva um procedimento que leia seu nome e ap�s a leitura e exiba o nome lido. Este procedimento dever� ser chamado atrav�s do programa principal.

void mostrar_nome(){
	
	char nome[50];
	
	printf("Digite seu nome: ");
	scanf("%s", nome);
	printf("Seu nome eh %s", nome);
	
	
}

void main(){
	
	mostrar_nome();
	
}
