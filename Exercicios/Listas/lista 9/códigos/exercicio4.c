#include <stdio.h>
#include <conio.h>

#define TF 10

//4. Ler um vetor C de 10 elementos inteiros, trocar todos os valores negativos do vetor C por 0. Escrever o vetor C modificado.



void carregar_vetor(int vetor[TF]){
	
	int i;
	
	system("cls");
	printf("Carregue o vetor!!!!\n\n");

	for(i=0; i<TF; i++){
		printf("Vetor[%d] : ", i);
		scanf("%d", &vetor[i]);
		
		if(vetor[i] < 0){
			vetor[i] = 0;
		}
		
	}
	
}
void exibir_vetor(int vetor[TF]){
	
	int i;
	
	system("cls");
	printf("\nExibindo vetor:\n");
	for(i=0; i<TF; i++){
		printf("\nVetor[%d] = %d", i, vetor[i]);
	}
	
	
}


void main(){
	
	int vetor[TF];
	
	printf(">>>esse programa vai ler 10 valores escritos por voce e exibi-los aps a leitura<<<\n\n");
	system("pause");
	
	carregar_vetor(vetor);
	exibir_vetor(vetor);
	
	printf("\n\n");
	system("pause");
	system("cls");
	printf("\n>>>Obrigado<<<\n\n");
	system("pause");
	
	
	
}
