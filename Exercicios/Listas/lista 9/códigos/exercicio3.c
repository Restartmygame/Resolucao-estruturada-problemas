#include <stdio.h>
#include <conio.h>

#define TF 5

//3.	Preencher um vetor B de 5 elementos com 1 se o numero informado pelo usuário ímpar e com 0 se for par. 
//Escrever o vetor B após o seu total preenchimento

void carregar_vetor(int vetor[TF]){
	
	int i;
	
	printf("Carregue o Vetor!!!\n\n");
	
	for(i=0; i<TF; i++){
		printf("Vetor[%d] : ", i);
		scanf("%d", &vetor[i]);
		
		if(vetor[i] %2 == 0){
			vetor[i] = 0;
		}else{
			vetor[i] = 1;
		}
			
	}
	
	
}

void exibir_vetor(int vetor[TF]){
	
	int i;
	
	printf("Exibindo vetor!!!\n\n");
	
	for(i=0; i<TF; i++){
		printf("\nVetor[%d] = %d", i, vetor[i]);
	}
	
	
}


void main(){
	
	int vetor[TF];
	
	carregar_vetor(vetor);
	exibir_vetor(vetor);
	
	printf("\n\n");
	system("pause");
	system("cls");
	printf("\n>>>Obrigado<<<\n\n");
	system("pause");
	
	
}
