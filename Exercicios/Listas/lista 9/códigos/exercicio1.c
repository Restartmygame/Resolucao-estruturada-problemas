#include <stdio.h>
#include <conio.h>

#define TF 10
//1. Carregar um vetor X de 10 elementos com o valores de 10 em 10 e exibi-lo no final.

void carregar_vetor(int vetor[TF]){
	
	int i;
	
	for(i=0; i<TF; i++){
		vetor[i] = i * 10 + 10;
	}
	
}
void exibir_vetor(int vetor[TF]){
	
	int i;
	
	system("cls");
	printf("\nExibindo vetor com 10 elementos com valores de 10 em 10:\n");
	for(i=0; i<TF; i++){
		printf("\nVetor[%d] = %d", i, vetor[i]);
	}
	
	
}


void main(){
	
	int vetor[TF];
	
	printf(">>>esse programa vai exibir um vetor de 10 elementos com valores de 10 em 10<<<\n\n");
	system("pause");
	
	carregar_vetor(vetor);
	exibir_vetor(vetor);
	
	printf("\n\n");
	system("pause");
	system("cls");
	printf("\n>>>Obrigado<<<\n\n");
	system("pause");
	
	
	
}
