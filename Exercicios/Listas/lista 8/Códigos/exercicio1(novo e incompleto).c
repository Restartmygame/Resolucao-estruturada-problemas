#include <stdio.h>
#include <conio.h>

// 1 - POR VALOR - Fa�a um programa que:
//a.	leia os valores de A, B;
//b.	se o n�mero A e B for pares, fazer o procedimento soma;
//c.	se o n�mero A e B forem impares, fazer a fun��o subtra��o;
//d.	se o n�mero A for PAR e B for IMPAR, fazer a m�dia de ambos os n�meros;
//e.	se o n�mero A for IMPAR e B for PAR, fazer uma fun��o para exibir o maior n�mero;

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
			if (a %2 != 0 && b %2 == 0){ //se a for �mpar e b par
				
			}else{ //se os dois forem �mpares
				sub = subtrair_a_b(a, b);
				printf("Esses dois numeors serao subtraidos!!!!\n\n");
				printf("o resultado da subtracao eh: %d", sub);
				system("\npause");	
			}
		}
	}
	
	
}
