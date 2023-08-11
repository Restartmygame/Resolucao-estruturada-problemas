#include <stdio.h>
#include <conio.h>

//4- Escreva um procedimento que leia 2 números, após a leitura somar e exibir o resultado. Este procedimento deverá ser chamado através do programa principal.

void somar(){
	
	int n1, n2, soma;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o Segundo numero: ");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	
	printf("A soma desses numeros eh %d", soma);
	
	
}


void main(){

	somar();	
	
}
