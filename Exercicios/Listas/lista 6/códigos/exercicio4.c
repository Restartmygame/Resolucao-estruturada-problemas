#include <stdio.h>
#include <conio.h>

//4.	Escreva uma fun��o que receba a Largura e o Comprimento do quadrado/ret�ngulo, calcule e retorne a �rea.

float calcular_area(float larg, float comp){
	
	float area;
	
	area = comp * larg;
	
	return area;
	
	
}


void main(){
	
	float larg, comp, area;
	
	printf("calculador de area de um retangulo!!!\n");
	printf("Digite a largura: ");
	scanf("%f", &larg);
	printf("Digite o comprimento: ");
	scanf("%f", &comp);
	
	area = calcular_area(larg, comp);
	
	system("cls");	
	printf("A area desse retangulo eh %0.2f", area);
	
	
	
}
