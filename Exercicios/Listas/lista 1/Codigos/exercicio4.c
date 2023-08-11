#include <stdio.h>
#include <conio.h>

//4.	[FOR] Escreva um algoritmo em que leia 20 números e imprima a soma dos positivos e o total de números negativos


void main(){
	
	int i, num, cont_neg = 0, soma_pos = 0;
	
	
	for(i = 1; i<=20; i++){
		printf("Digite seu numero: ");
		scanf("%d", &num);
		
		if(num < 0){
			cont_neg++;
		}else{
			soma_pos = soma_pos + num;
		}
		
		
	}
	
	printf("Foram inseridos %d numeros negativos \n\nA soma dos numeros positivos eh %d", cont_neg, soma_pos);
	
	
}
