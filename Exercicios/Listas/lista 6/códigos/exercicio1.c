#include <stdio.h>
#include <conio.h>

//1.	Escreva uma função, que receba por parâmetro dois valores A e B, calcule e retorne a soma dos valores.


int calcular_soma(int a, int b){
	
	int soma;
	
	soma = a + b;
	return soma;
	
	
}


void main(){
	int a, b, soma;
	
	printf("Somador de 2 numeros!!!\n\n");
	printf("Digite o primeiro valor: ");
	scanf("%d", &a);
	printf("Digite o segundo valor: ");
	scanf("%d", &b);
	
	soma = calcular_soma(a,b);
	printf("Soma: %d", soma);
	
	
}
