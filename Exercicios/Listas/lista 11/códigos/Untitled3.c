#include <stdio.h>
#include <conio.h>
#include <string.h>

//Faça um procedimento que receba uma string e a retorne escrita de trás pra frente.

char *carregar_string(){
	
	char texto_inicio;
	printf("Digite um texto: ");
	gets(texto_inicio);
	return(texto inicio);

}

int inverter_texto(char texto[2000]){

	int i, fim, j;
	char aux;
	fim = strlen(texto);
	
	
	for(i=0, j = fim-1; i<j; i++, j--){
		aux = texto[i];
		texto[i] = texto[j];
		texto[j] = aux;
	}

}

void exibir_texto(){

	
}



void main(){
	
	char texto[2000];
	
	texto = carregar_string();
	fim = inverter_texto(texto);
	exibir_texto();
	
	
	
	
}
