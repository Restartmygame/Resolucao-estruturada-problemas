#include <stdio.h>
#include <conio.h>

#define TL 4
#define TC 4

//3.	Ler uma matriz SOMA 4x4, calcular e escrever as seguintes somas:
//		a) da linha 3
//		b) da coluna 2
//		c) de todos os elementos da matriz

void carregar_matriz(int soma[TL][TC]){
	
	int l, c, cont=1;
	
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			printf("Informe o valor na posicao [%d][%d]: ", l, c);
			scanf("%d", &soma[l][c]);
			
			/*printf("%d\n", cont); //leitrua automatica para testar
			soma[l][c] = cont;
			cont++;
			*/
		}
	}
}

int somar_linha3(int soma[TL][TC], int soma_l3){
	
	int l, c;
	
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			if(l == 3){
				soma_l3 += soma[l][c];
			}
		}
	}
	
	return(soma_l3);
}

int somar_coluna2(int soma[TL][TC], int soma_c2){
	
	int l, c;
	
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			if(c == 2){
				soma_c2 += soma[l][c];
			}
		}
	}
	
	return(soma_c2);
}

int somar_tudo(int soma[TL][TC], int soma_todos){
	
	int l, c;
	
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			soma_todos += soma[l][c];
		}
	}
	
	return(soma_todos);
}

void main(){
	
	int soma[TL][TC], soma_l3=0, soma_c2=0, soma_todos=0;
	
	carregar_matriz(soma);
	soma_l3 = somar_linha3(soma, soma_l3);
	soma_c2 = somar_coluna2(soma, soma_c2);
	soma_todos = somar_tudo(soma, soma_todos);
	
	printf("\na soma dos elementos da linha 3 eh %d", soma_l3);
	printf("\na soma dos elementos da coluna 2 eh %d", soma_c2);
	printf("\na soma de todos os elementos eh %d", soma_todos);
	
	
}


