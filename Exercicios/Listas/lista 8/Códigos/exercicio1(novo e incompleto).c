#include <stdio.h>
#include <conio.h>

// 1 - POR VALOR - Faça um programa que:
//a.	leia os valores de A, B;
//b.	se o número A e B for pares, fazer o procedimento soma;
//c.	se o número A e B forem impares, fazer a função subtração;
//d.	se o número A for PAR e B for IMPAR, fazer a média de ambos os números;
//e.	se o número A for IMPAR e B for PAR, fazer uma função para exibir o maior número;

void somar_a_b(int a, int b){
	
	int soma;
	
	soma = a + b;
	
	printf("Esses dois numeors serao somados!!!!\n\n");
	printf("o resultado da soma eh: %d", soma);
	
}

int subtrair_a_b(int a, int b){
	
	int sub;
	
	sub = a - b;
	
	return sub;
	
}


void main(){
	
	int a, b, soma, sub;
	
	printf("Escreva os valores de A e B e veja o que acontece...\n\n");
	printf("digite o valor de A: ");
	scanf("%d", &a);
	printf("digite o valor de B: ");
	scanf("%d", &b);
	
	if (a %2 == 0 && b %2 == 0){ //se os dois forem pares
		somar_a_b(a, b);
		system("\npause");
	}else{
		if (a %2 == 0 && b %2 != 0){ //se a for par e b impar
			
		}else{
			if (a %2 != 0 && b %2 == 0){ //se a for ímpar e b par
				
			}else{ //se os dois forem ímpares
				sub = subtrair_a_b(a, b);
				printf("Esses dois numeors serao subtraidos!!!!\n\n");
				printf("o resultado da subtracao eh: %d", sub);
				system("\npause");	
			}
		}
	}
	
	
}
