#include <stdio.h>
#include <conio.h>

//3.	Escreva um programa que leia o c�digo de origem de um produto e imprima na tela a regi�o de sua proced�ncia conforme a tabela abaixo:
//-c�digo 1 : Sul 			-c�digo 5 ou 6 : Nordeste
//-c�digo 2 : Norte 			-c�digo 7, 8 ou 9 : Sudeste
//-c�digo 3 : Leste 			-c�digo 10 : Centro-Oeste
//-c�digo 4 : Oeste 			-c�digo 11 : Noroeste
//Observa��o: Caso o c�digo n�o seja nenhum dos especificados o produto deve ser encarado como Importado.

void main(){
	
	int cod;
	
	printf("digite o c�digo do produto: ");
	scanf("%d", &cod);
	
	switch (cod){
		case 1:
			printf("Produto tem codigo de origem sul");
			break;
		case 2:
			printf("Produto tem codigo de origem norte");
			break;
		case 3:
			printf("Produto tem codigo de origem leste");
			break;
		case 4:
			printf("Produto tem codigo de origem oeste");
			break;
		case 5:
		case 6:
			printf("Produto tem codigo de origem nordeste");
			break;
		case 7:
		case 8:
		case 9:
			printf("Produto tem codigo de origem sudeste");
			break;
		case 10:
			printf("Produto tem codigo de origem centro-oeste");
			break;
		case 11:
			printf("Produto tem codigo de origem noroeste");
			break;
		default: 
		printf("esse codigo esta invalido, tente novamente");
		break;
		
	}
	
	
	
	
	
	
}

