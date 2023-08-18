#include <stdio.h>
#include <conio.h>

//Escreva um algoritmo que tenha em seu programa principal a exibi��o de um menu de op��es conforme abaixo:
//1 - Calcular Idade
//2 - M�dia de 4 Notas
//3 - Multiplica��o de 2 N�mero
//4 - Divis�o de 2 N�mero
//5 - Sair

//O usu�rio dever� escolher qual op��o deseja executar. 
//Caso o usu�rio escolha uma op��o inv�lida, uma mensagem dever� ser exibida de advert�ncia e o menu dever� ser exibido novamente para que seja escolhido uma nova op��o. 
//Para cada op��o escolhida, o algoritmo dever� chamar a fun��o correspondente a op��o, ou seja, teremos no m�nimo 4 fun��es diferentes no algoritmo.
//Cada fun��o dever�o ter suas leituras e processamentos correspondentes ao objetivo da op��o escolhida. Retornar e exibir o resultado no programa principal.

int calcular_idade(){
	
	int idade, ano_atual, ano_usuario;
	
	system("cls");
	printf(">>>Calculador de idade<<<\n\n");
	printf("Digite o ano atual: ");
	scanf("%d", &ano_atual);
	printf("Digite o ano em que voce nasceu: ");
	scanf("%d", &ano_usuario);
	
	idade = ano_atual - ano_usuario;
	
	return idade;
	
}

float calcular_media_4_notas(){

	float n1, n2, n3, n4, media;
	
	system("cls");
	printf("Calculador de 4 medias!!!\n\n");
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	printf("Digite a quarta nota: ");
	scanf("%f", &n4);
	
	media = (n1 + n2 + n3 + n4) /4;
	
	return media;
	

}

float multiplicar_2_numeros(){
	
	float n1, n2, mult;
	
	system("cls");
	printf("Multiplicador de 2 numeros!!!\n\n");
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	printf("Digite o segundo numero: ");
	scanf("%f", &n2);

	mult = n1 * n2;
	
	return(mult);	
	
}

float dividir_2_numeros(){
	
	float n1, n2, div;
	
	system("cls");
	printf("Divisor de dois numeros!!!\n\n");	
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	printf("Digite o segundo numero: ");
	scanf("%f", &n2);
	
	div = n1 / n2;
	
	return div;
	
	
	
	
}
void menu(){
	
	int opcao, idade;
	float media_4_notas, multiplicacao_2_numeros, divisao_2_num;
	
	do{
		system("cls");
		printf("Menu de opcoes\n\n");
		printf("\n1- Calcular Idade");
		printf("\n2- Media de 4 notas");
		printf("\n3- Multiplicacao de 2 numeros");
		printf("\n4- Divisao de 2 numeros");
		printf("\n5- Sair");
		printf("\nInforme uma opcao: ");
		scanf("%d", &opcao);
		
		switch (opcao){
			
			case 1:
				idade = calcular_idade();
				printf("Voce tem %d anos!!!", idade);
			
				break;
			case 2:
				media_4_notas = calcular_media_4_notas();
				printf("A media entre essas 4 notas eh %f", media_4_notas);
				
				break;
			case 3:
				multiplicacao_2_numeros = multiplicar_2_numeros();
				printf("A multiplicacao desses dois numeros eh %0.2f!!", multiplicacao_2_numeros);
				
				break;
			case 4:
				divisao_2_num = dividir_2_numeros();
				printf("A divisao desses dois numeros eh %0.2f!!", divisao_2_num);
				
				break;
			case 5:
				printf("\n\nPrograma finalizado!!!");
				printf("\n\nObrigado por utilizar o programa :)");
				
				break;
			default: 
				system("cls");
				printf("\nOpcao Invalida!!!");
				break;
			
		}
		printf("\n\n");
		system("pause");
		
	
	}while(opcao != 5);	
	
}





void main(){
	
	menu();
	
}
