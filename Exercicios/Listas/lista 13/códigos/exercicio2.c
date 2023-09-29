#include <stdio.h>
#include <conio.h>

#define TL 3
#define TC 3

//2.	Carregar uma matriz 4x4 com números fornecidos pelo usuário. Ao final ler um número informado pelo usuário e procurar se o mesmo está na matriz.

void carregar_matriz(int mat[TL][TC]){
	int l, c;
	
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			printf("Informe o valor na posicao [%d][%d]: ", l, c);
			scanf("%d", &mat[l][c]);
		}
	}
}

void procurar_numero(int mat[TL][TC]){
	
	int l, c, num_ver, nada=0;
	
	printf("Digite o numero que deseja verificar se esta presente na matriz: ");
	scanf("%d", &num_ver);
	
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			if(num_ver == mat[l][c]){
				printf("\nnumero inserido encontrado na posicao [%d][%d]", l, c);
				nada++;
			}
		}
	}
	
	if(nada == 0){
		printf("\nEsse numero nao foi encontrado em nenhuma posicao da matriz :(");
	}
}


void main(){
	
	int mat[TL][TC];
	
	carregar_matriz(mat);
	procurar_numero(mat);
	
}
