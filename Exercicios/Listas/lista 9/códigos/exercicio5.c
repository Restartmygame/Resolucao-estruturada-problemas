#include <stdio.h>
#include <conio.h>

#define TF 10

//5.	Ler um vetor D de 10 elementos. Criar um vetor E, com todos os elementos de D na ordem inversa, 
//		ou seja, o último elemento passará a ser o primeiro, o penúltimo será o segundo e assim por diante. 
//		Escrever todo o vetor D e todo o vetor E.

void carregar_vetor(int vetD[TF]){
	
	int i;
	
	system("cls");
	printf("Carregue o vetor!!!!\n\n");

	for(i=0; i<TF; i++){
		printf("Vetor[%d] : ", i);
		scanf("%d", &vetD[i]);
	}
	
}

void inverter_vetor(int vetD[TF], int vetE[TF]){
	
	int i, j = 0;
	
	/*
	for(i=TF-1; i >= 0; i--){
		vetE[j] = vetD[i];
		j++;
	}
	*/
	//melhor forma de escrever
	
	for(i=0, j=TF-1; i<TF; i++, j--){
		vetE[i] = vetD[j];
	}
	
	
}

void exibir_vetor(int vetor[TF], char vetor_p){
	
	int i;
	
	printf("\n\nExibindo vetor %c:\n", vetor_p);
	for(i=0; i<TF; i++){
		printf("\nVetor[%d] = %d", i, vetor[i]);
	}
	
}

void main(){
	
	int vetD[TF], vetE[TF];
	char vetor_p;
	
	printf(">>>esse programa vai ler 10 valores escritos por voce e exibi-los de forma normal e invertida apos a leitura<<<\n\n");
	system("pause");
	
	carregar_vetor(vetD);
	inverter_vetor(vetD, vetE);
	system("cls");
	exibir_vetor(vetD, vetor_p='D');
	exibir_vetor(vetE, vetor_p='E');
	
	printf("\n\n");
	system("pause");
	system("cls");
	printf("\n>>>Obrigado<<<\n\n");
	system("pause");
	
	
	
	
}
