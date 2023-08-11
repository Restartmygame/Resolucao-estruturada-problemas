#include <stdio.h>
#include <conio.h>

//- Escreva um algoritmo que tenha em seu programa principal a exibição de um menu de opções conforme abaixo:
//1 - Calcular Idade
//2 - Média de 3 Notas
//3 - Maior Número
//4 - Menor Número
//5 - Sair

//O usuário deverá escolher qual opção deseja executar. 
//Caso o usuário escolha uma opção inválida, uma mensagem deverá ser exibida de advertência e o menu deverá ser exibido novamente para que seja escolhido uma nova opção. 
//Para cada opção escolhida, o algoritmo deverá chamar o procedimento correspondente a opção, ou seja, teremos no mínimo 4 procedimentos diferentes no algoritmo.
//Cada procedimento deverá ter suas leituras e processamentos correspondentes ao objetivo da opção escolhida.

void calcular_idade(){
	system("cls");
	int aa, an, idade;
	
	printf("Digite o ano atual: ");
	scanf("%d", &aa);
	printf("Digite o ano em que voce nasceu: ");
	scanf("%d", &an);
	
	idade = aa - an;
	
	printf("Voce tem %d anos!!\n\n", idade);
	system("pause");
	
}




void menu(){
	
	int opcao;
	
	do{
	system("cls");
	printf("   >>>Menu<<<");
	printf("\n\n1 - Calcular Idade");
	printf("\n2 - Média de 3 Notas");
	printf("\n3 - Maior Numero");
	printf("\n4 - Menor Numero");
	printf("\n5 - Sair");
	printf("\nDigite sua escolha: ");
	scanf("%d", &opcao);
	
	switch(opcao){
	
		case 1:
			calcular_idade();
			break;
		default:
			printf("Numero Invalido");
			break;
	}
	
	
	}while(opcao != 5);
	
	
	
}



void main(){
	
	menu();	
	
}
