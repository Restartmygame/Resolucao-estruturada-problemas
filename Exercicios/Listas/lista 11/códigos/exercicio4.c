#include <stdio.h>
#include <conio.h>
#include <string.h>

//Fa�a um programa que leia uma string do teclado e diga se ela � pal�ndrome. Uma string � pal�ndrome quando pode ser lida tanto 
//de tr�s pra frente quanto de frente para tr�s e possui exatamente a mesma seq��ncia de caracteres. Ex.: ASA, SUBI NO ONIBUS. 
//Desconsidere os espa�os. Defina uma fun��o chamada Palindrome que receba uma string como par�metro e retorne sim ou n�o no seu programa.
//Dica: Use a fun��o do exerc�cio 1.



void inverter_texto(char texto[2000]){

	int i, fim, j;
	char aux;
	fim = strlen(texto);
	
	
	for(i=0, j = fim-1; i<j; i++, j--){
		aux = texto[i];
		texto[i] = texto[j];
		texto[j] = aux;
	}

}

void main(){
	
	char texto[2000], texto_copia[2000];
	printf("Digite o texto: ");
	gets(texto);
	
	strcpy(texto_copia, texto);
	
	inverter_texto(texto_copia);
	
	if(strcmp(texto, texto_copia) == 0){
		printf("Esse texto eh palindrome");
	}else{
		printf("Esse texto nao eh palindrome");
	}
	
	
	
}
