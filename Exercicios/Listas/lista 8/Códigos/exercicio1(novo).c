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
	printf("o resultado da soma eh: %d\n\n", soma);
	
}

int subtrair_a_b(int a, int b){
	
	int sub;
	
	sub = a - b;
	
	return sub;
	
}

int media_a_b(int a, int b){
	
	int medint;
	float af, bf, med;
	
	af = (float)a;
	bf = (float)b;
	
	med = (af + bf) / 2;
	
	medint = (int)med;
	
	return medint;
	
}

int maior_valor(int a, int b){
	
	int maior;
	
	if(a > b){
		maior = a;
	}else{
		maior = b;
	}
	
	return maior;
	
}


void main(){
	
	int a, b, soma, sub, med, maior;
	
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
			med = media_a_b(a, b);
			printf("Esses dois numeors serao somados e transformados em uma media!!!!\n\n");
			printf("o resultado da media entre os dois numeros eh: %d\n\n", med);
			system("\npause");		
		}else{
			if (a %2 != 0 && b %2 == 0){ //se a for ímpar e b par
				maior = maior_valor(a, b);
				printf("Os numeros serao processados e sera determinado qual eh maior!!!\n\n");
				printf("O maior numero inserido eh o %d\n\n", maior);
				system("pause");	
				
			}else{ //se os dois forem ímpares
				sub = subtrair_a_b(a, b);
				printf("Esses dois numeros serao subtraidos!!!!\n\n");
				printf("o resultado da subtracao eh: %d\n\n", sub);
				system("\npause");	
			}
		}
	}
	
	
}
