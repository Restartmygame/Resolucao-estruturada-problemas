#include <stdio.h>
#include <conio.h>

#define TL 3
#define TC 3

//4.	Carregar uma matriz 3x3 com número inteiros, 
//		gerar uma nova matriz com os número da matriz carregada, multiplicados por 2.

void carregar_matriz(int mat[TL][TC]){
	
	int l, c;
	
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			printf("Informe o valor na posicao [%d][%d]: ", l, c);
			scanf("%d", &mat[l][c]);
			
			/*printf("%d\n", cont); //leitura automatica para testar
			soma[l][c] = cont;
			cont++;
			*/
		}
	}
}

void duplicar_matriz(int mat[TL][TC], int mat2[TL][TC]){
	
	int l, c, valor_mult=0;
	
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			valor_mult = mat[l][c] * 2;
			mat2[l][c] = valor_mult;
		}
	}
}

void exibir_matriz(int mat2[TL][TC]){
	
	int l, c;
	
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			printf("\nmatriz duplicada [%d][%d]: %d", l, c, mat2[l][c]);
		}
	}
}

void main(){
	
	int mat[TL][TC], cont=1, mat2[TL][TC];
	
	carregar_matriz(mat);
	duplicar_matriz(mat, mat2);
	exibir_matriz(mat2);

	
	
	
	
}
