#include <stdio.h>
#include <conio.h>

//Escreva uma função que retorne a mensagem "olá mundo!". Está função deverá ser chamado através do programa principal. Exibir conteúdo retornado.

char *funcao_ola_mundo(){
	return "OLA MUNDO";
}


void main(){

	printf("Retorno -> %s", funcao_ola_mundo());

}
