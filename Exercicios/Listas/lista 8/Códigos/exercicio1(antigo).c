#include <stdio.h>
#include <conio.h>


//1.	POR VALOR - Faça um procedimento que receba por parâmetros 2 valores. O usuário deverá escolher qual opção aritmética deverá ser realizado. 
// (criar um menu com as opções dentro do procedimento)

float somar_numeros(float n1, float n2){
	
	float soma;
	
	soma = n1 + n2;
		
	return soma;	
}

float subtrair_numeros(float n1, float n2){
	
	float sub;
	
	sub = n1 - n2;
	
	return sub;
	
}

float multiplicar_numeros(float n1, float n2){
	
	float mult;
	
	mult = n1 * n2;
	
	return mult;
	
}

float dividir_numeros(float n1, float n2){
	
	float div;
	
	div = n1 / n2;
	
	return div;
	
}





void main(){
	
	float n1, n2, soma, sub, mult, div;
	int decisao, tempo = 3;
	
	printf(">>Esse algoritmo fara um calculo baseado em dois numeros<<");
	printf("\n\n\nDigite o primeiro numero: ");
	scanf("%f", &n1);
	printf("\nDigite o segundo numero: ");
	scanf("%f", &n2);
	
	do{
		system("cls");
		printf("\n escolha a operacao aritmetica desejada");
		printf("\n\n%0.2f ? %0.2f", n1, n2);
		printf("\n\n1 - Somar");
		printf("\n2 - Subtrair");
		printf("\n3 - Multiplicar");
		printf("\n4 - Dividir");
		printf("\n5 - Sair\n");
		scanf("%d", &decisao);
	
		system("cls");
		switch (decisao){		
			case 1:
				soma = somar_numeros(n1, n2);
				printf("\n\nA soma desses numeros eh %0.2f\n\n", soma);
				system("pause");
				break;
			case 2:
				sub = subtrair_numeros(n1, n2);
				printf("\n\nA subtracao desses numeros eh %0.2f\n\n", sub);
				system("pause");
				break;
			case 3:
				mult = multiplicar_numeros(n1, n2);
				printf("\n\nA multiplicacao desses numeros eh %0.2f\n\n", mult);
				system("pause");
				break;
			case 4:
				div = dividir_numeros(n1, n2);
				printf("\n\nA multiplicacao desses numeros eh %0.2f\n\n", div);
				system("pause");
				break;
			case 5:
				printf("Obrigado por usar o algoritmo!!\n");
				sleep(tempo);
				break;
			default:
				
				break;		
		}
	} while (decisao != 5);
	
	
	
	
	
}
