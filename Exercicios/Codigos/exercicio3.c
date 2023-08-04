#include <stdio.h>
#include <conio.h>

//3.	Escreva um programa que leia o código de origem de um produto e imprima na tela a região de sua procedência conforme a tabela abaixo:
//-código 1 : Sul 			-código 5 ou 6 : Nordeste
//-código 2 : Norte 			-código 7, 8 ou 9 : Sudeste
//-código 3 : Leste 			-código 10 : Centro-Oeste
//-código 4 : Oeste 			-código 11 : Noroeste
//Observação: Caso o código não seja nenhum dos especificados o produto deve ser encarado como Importado.

void main(){
	
	int cod;
	
	printf("digite o código do produto: ");
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

