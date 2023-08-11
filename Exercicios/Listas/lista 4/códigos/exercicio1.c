#include <stdio.h>
#include <conio.h>

//1- Escreva uma função que leia 2 números, após a leitura somar e retornar o resultado. Está função deverá ser chamado através do programa principal. 
//Exibir conteúdo retornado.

int somar_dois_num(){
	int n1, n2, soma;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	return soma;
	
}

void main(){
	int soma;
	soma = somar_dois_num();
	printf("\nA soma desses numeros eh %d", soma);
	
}
