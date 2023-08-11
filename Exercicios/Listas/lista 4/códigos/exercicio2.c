#include <stdio.h>
#include <conio.h>

//Escreva uma função que leia 4 números, após a leitura multiplique todos e retorne o resultado. 
//Está função deverá ser chamada através do programa principal. Exibir conteúdo retornado.

float mult_4_num(){
	
	float n1, n2, n3, n4, mult;
	
	printf("Digite 4 numeros e eles serao multiplicados!!!\n");
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	printf("Digite o segundo numero: ");
	scanf("%f", &n2);
	printf("Digite o terceiro numero: ");
	scanf("%f", &n3);
	printf("Digite o quarto numero: ");
	scanf("%f", &n4);
	
	mult = n1*n2*n3*n4;
	return mult;
	
}



void main(){
	
	float mult;
	
	mult = mult_4_num();
	
	printf("\n\nO resultado da operacao eh %f", mult);
	

}
