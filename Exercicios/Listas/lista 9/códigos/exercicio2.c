#include <stdio.h>
#include <conio.h>

#define TF 5


//2.	Preencher um vetor A de 5 elementos com os números fornecidos pelos usuários.  Escrever o vetor A após o seu total preenchimento.

void carregar_vetor(int vetor[TF]){
	
	int i;
	
	system("cls");
	printf("Carregue o vetor!!!!\n\n");

	for(i=0; i<TF; i++){
		printf("Vetor[%d] : ", i);
		scanf("%d", &vetor[i]);
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
	
	printf(">>>esse programa vai ler 5 valores escritos por voce e exibi-los aps a leitura<<<\n\n");
	system("pause");
	
	carregar_vetor(vetor);
	exibir_vetor(vetor);
	
	printf("\n\n");
	system("pause");
	system("cls");
	printf("\n>>>Obrigado<<<\n\n");
	system("pause");
	
	
	
}
