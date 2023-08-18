#include <stdio.h>
#include <conio.h>


//2.	Escreva uma função que receba a data de nascimento de uma pessoa (DataNascimento), calcule e retorne a idade.

int calcular_data_nascimento(int ano_atual, int ano_usuario){
	
	int idade;
	
	idade = ano_atual - ano_usuario;
	
	return(idade);
	
}



void main(){
	
	int ano_atual, ano_usuario, idade;
	
	printf("calculador de idade!!!\n\n");
	printf("Digite o ano atual: ");
	scanf("%d", &ano_atual);
	printf("Digite o ano em que voce nasceu: ");
	scanf("%d", &ano_usuario);
	
	idade = calcular_data_nascimento(ano_atual, ano_usuario);
	
	system("cls");
	printf("\n");
	printf("voce tem %d anos!!!", idade);
	
	
	
}
