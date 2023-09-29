#include <stdio.h>
#include <conio.h>

#define TF 5

//11.	Faça um algoritmo que leia dois vetores (A e B) de 50 posições de números. O algoritmo deve, então, 
//	subtrair o primeiro elemento de A do último de B, acumulando o valor, subtrair o segundo elemento de A do penúltimo de B, 
//	acumulando o valor, e assim por diante. Mostre o resultado da soma final.

void main(){
	
	int i, u, vetA[TF], vetB[TF], i2, sub, soma=0;
	
	
	for(i=0, u=1; i<TF; i++, u++){
		printf("Digite o %do valor do vetor A: ", u);
		scanf("%d", &vetA[i]);
		printf("Digite o %do valor do vetor B: ", u);
		scanf("%d", &vetB[i]);
	}
	
	for(i=0, i2=TF-1; i<TF; i++, i2--){
		sub = vetA[i] - vetB[i2];
		soma += sub;
	}
	
	printf("\nresultado da soma das subtracoees: %d", soma);
	
	
}
