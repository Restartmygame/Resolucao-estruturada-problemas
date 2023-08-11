#include <stdio.h>
#include <conio.h>

//4- Escreva um procedimento que leia 4 números, após a leitura multiplique todos e exibir o resultado. 
//Este procedimento deverá ser chamado através do programa principal.

void mult(){
	
	int n1, n2, n3, n4, mult;
	
	printf("Digite 4 numeros e elese serao multiplicados!!!!\n");
	
	
		printf("Digite o %d numero: ");
		scanf("%d", n1);
		printf("Digite o %d numero: ");
		scanf("%d", n2);
		printf("Digite o %d numero: ");
		scanf("%d", n3);
		printf("Digite o %d numero: ";
		scanf("%d", n4);
	
	
	
	mult = n1*n2*n3*n4;
	printf("A multiplicacao dos numeros eh %d", mult);
	
}


void main(){
	
	mult();
	
}
