#include <stdio.h>
#include <conio.h>

//Escreva uma fun��o que leia 4 n�meros, ap�s a leitura multiplique todos e retorne o resultado. 
//Est� fun��o dever� ser chamada atrav�s do programa principal. Exibir conte�do retornado.

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
